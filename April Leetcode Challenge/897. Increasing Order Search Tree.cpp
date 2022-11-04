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
    TreeNode*res=new TreeNode(-1);
    TreeNode*ans=res;
    void inorder(TreeNode*root)
    {
        if(root==NULL)
        {
            return;
        }
        inorder(root->left);
        res->right=new TreeNode(root->val);
        res=res->right;
        inorder(root->right);
    }
    TreeNode* increasingBST(TreeNode* root) {
       inorder(root);
        return ans->right;
    
    }
};
