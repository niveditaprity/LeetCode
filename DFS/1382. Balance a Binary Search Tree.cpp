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
    vector<int>nums;
    TreeNode*ConstructBBST(int l,int r)
    {
       if(l>r)
       {
           return NULL;
       }
         int mid = r+(l-r)/2;
         TreeNode*root = new TreeNode(nums[mid]);
         root->left = ConstructBBST(l,mid-1);
         root->right = ConstructBBST(mid+1,r);
         return root;
      
    }
    void inorder(TreeNode*root)
    {
        if(root ==  NULL)
        {
            return;
        }
        inorder(root->left);
        nums.push_back(root->val);
        inorder(root->right);
    }
    TreeNode* balanceBST(TreeNode* root) {
    inorder(root);
        return ConstructBBST(0,nums.size()-1);
    }
};
