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
    map<int,int>level;
    int maxlevel;
    void deep(TreeNode*root,int h)
    {
        if(root==NULL)
        {
return;
        }
        maxlevel=max(maxlevel,h);
        level[h]+=root->val;
        deep(root->left,h+1);
        deep(root->right,h+1);
        
        
    }
    int deepestLeavesSum(TreeNode* root) {
        deep(root,1);
        return level[maxlevel];
    }
};
