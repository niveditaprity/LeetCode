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
    vector<int>v;
    int i=0;
    void inorder(TreeNode*root)
    {
        if(root==NULL)
        {
            return;
        }
        inorder(root->left);
        v.push_back(root->val);
        inorder(root->right);
    }
    void modify(TreeNode*root)
    {
        if(root==NULL)
        {
            return;
        }
        modify(root->left);
        root->val=v[i];
        i++;
        modify(root->right);
    }
    TreeNode* bstToGst(TreeNode* root) {
        if(root==NULL)
        {
            return NULL;
        }
        inorder(root);
        for(int i=0;i<v.size();i++)
        {
        int sum=0;
            for(int j=i+1;j<v.size();j++)
            {
               sum+=v[j]; 
            }
            v[i]=v[i]+sum;
        }
        modify(root);
        return root;
    }
};
