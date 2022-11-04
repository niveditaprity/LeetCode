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
    int depth(TreeNode*root)
    {
        if(root==NULL)
        {
            return 0;
        }
        return 1+max(depth(root->left),depth(root->right));
    }
    TreeNode*findnode(TreeNode*root)
    {
      if(root==NULL)
      {
          return NULL;
      }
        int l = depth(root->left);
        int r = depth(root->right);
        if(l==r)
        {
          return root;
        }
       else if(l>r)
        {
            return findnode(root->left);
        }
        else
            return findnode(root->right);
    }
    TreeNode* subtreeWithAllDeepest(TreeNode* root) {
       return findnode(root); 
    }
};
