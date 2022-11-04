/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int help(TreeNode*root,map<TreeNode*,int>&m)
    {
        int val=0;
        if(root==NULL)
        {
            return 0;
        }
        if(m.count(root))
        {
            return m[root];
        }
        if(root->left)
        {
        val+=help(root->left->left,m)+help(root->left->right,m);
        }
        if(root->right)
        {
            val+=help(root->right->left,m)+help(root->right->right,m);
        }
        val=max(val+root->val,help(root->left,m)+help(root->right,m));
            return m[root]=val;
        
        
    }
    int rob(TreeNode* root) {
        map<TreeNode*,int>m;
       return  help(root,m);
        
    }
};
