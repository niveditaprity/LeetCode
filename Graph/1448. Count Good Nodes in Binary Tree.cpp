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
    void inorder(TreeNode*root,int max)
    {
        if(root==NULL)
            return;
        if(max < root->val) 
            max = root->val;  
        inorder(root->left,max);
        if(max<=root->val)
        {
            max=root->val;
            count++;
        }
        inorder(root->right,max);
        
    }
    int goodNodes(TreeNode* root) { 
        inorder(root,root->val);
        return count;
    }
};
