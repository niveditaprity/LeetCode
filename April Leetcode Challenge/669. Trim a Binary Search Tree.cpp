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
    TreeNode* trimBST(TreeNode* root, int low, int high) {
      if(root==NULL)
      {
          return NULL;
      }
        //find new root
        TreeNode*temp=root;
        while(temp)
        {
            if(temp->val<low)
            {
                temp=temp->right;
            }
            else if(temp->val>high)
            {
                temp=temp->left;
            }
            else
            {
                break;
            }
        }
        
        if(temp==NULL)
        {
            return NULL;
        }
        TreeNode*new_root=temp;
        while(temp->left)
        {
            TreeNode*l=temp->left;
            if(l->val<low)
            {
                temp->left=l->right;
            }
            else
            {
                temp=l;
            }
        }
        temp=new_root;
        while(temp->right)
        {
            TreeNode*r=temp->right;
            if(r->val>high)
            {
                temp->right=r->left;
            }
            else
            {
                temp=r;
            }
        }
        return new_root;
    }
};
