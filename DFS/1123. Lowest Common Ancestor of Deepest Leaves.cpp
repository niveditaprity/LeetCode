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
    int height(TreeNode*root)
    {
        if(root==NULL)
        {
            return 0;
        }
        return 1+max(height(root->left), height(root->right));
    }
    TreeNode* lcaDeepestLeaves(TreeNode* root) {
     int l = height(root->left);
     int r = height(root->right);
        
        if(l==r)
        {
            return root;
        }
        if(l>r)
        {
           return lcaDeepestLeaves(root->left); 
        }
        if(r>l)
        {
          return lcaDeepestLeaves(root->right);  
        }
      return NULL;
    }
};
