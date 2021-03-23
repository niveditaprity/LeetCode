/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode*targ,*res;
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
       targ=target;
        return inorder(original,cloned);
    }
    TreeNode*inorder(TreeNode* original, TreeNode* cloned)
    {
        if(original!=NULL)
        {
            inorder(original->left,cloned->left);
                if(original==targ)
                {
                    res=cloned;
                }
            inorder(original->right,cloned->right);
                
        }
        return res;
    }
};
