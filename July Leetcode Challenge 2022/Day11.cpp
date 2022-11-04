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
    int lastlevel=-1;
    vector<int>v;
    void rightView(TreeNode*root,int level)
    {
        if(root==NULL)
        {
            return;
        }
        if(lastlevel<level)
        {
            v.push_back(root->val);
            lastlevel=level;
        }
        rightView(root->right,level+1);
        rightView(root->left,level+1);
    }
    vector<int> rightSideView(TreeNode* root) {
        rightView(root,0);
        return v;
    }
};
