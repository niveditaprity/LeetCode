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
    
    pair<TreeNode*,int>depth(TreeNode*root,TreeNode*par,int x,int level)
    {
        if(root==NULL)
        {
            return {NULL,0};
        }
        if(root->val==x)
        {
            return {par,level};
        }
        pair<TreeNode*,int>d1;
        pair<TreeNode*,int>d2;
        d1=depth(root->left,root,x,level+1);
        d2=depth(root->right,root,x,level+1);
    return d1.first ? d1:d2;
    }
    bool isCousins(TreeNode* root, int x, int y) {
     pair<TreeNode*,int>xx=depth(root,NULL,x,0);
     pair<TreeNode*,int>yy=depth(root,NULL,y,0);
        if((xx.second==yy.second)&&(xx.first!=yy.first))
        {
            return true;
        }
        else
        {
            return false;
        }
        
        
        
    }
};
