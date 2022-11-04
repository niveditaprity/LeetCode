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
    int total;
    int dfs(TreeNode*root)
    {
        if(root==NULL)
        {
            return 0;
        }
        int l=dfs(root->left);
        int r=dfs(root->right);
        total+=abs(l-r);
        return l+r+root->val;
    }
    int findTilt(TreeNode* root) {
        dfs(root);
        return total;
        
    }
};
