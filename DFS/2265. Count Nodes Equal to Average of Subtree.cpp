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
    int count=0;
    int sumofSubtree(TreeNode*root)
    {
      if(root==NULL)
      {
          return 0;
      }
      
        return root->val+sumofSubtree(root->left) + sumofSubtree(root->right);
    }
    int NodesofSubtree(TreeNode*root)
    {
      if(root==NULL)
      {
          return 0;
      }
        if(root->left==NULL && root->right==NULL)
      {
          return 1;
      } 
        return 1 + NodesofSubtree(root->left)+NodesofSubtree(root->right);
    }
    
    void counttotal(TreeNode*root)
    {
        if(root==NULL)
       {
           return;
       }
        if(root->val == sumofSubtree(root)/NodesofSubtree(root))
        {
            count++;
        }
        averageOfSubtree(root->left);
        averageOfSubtree(root->right);
    }
    int averageOfSubtree(TreeNode* root) {
       counttotal(root);
        return count;
    }
};
