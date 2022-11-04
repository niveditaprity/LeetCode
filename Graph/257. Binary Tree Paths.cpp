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
    void stringrecursive(TreeNode*root,string str,vector<string>&s)
    {
        if(root==NULL)
        {
            return;
        }
        if(root->left==NULL && root->right==NULL)
        {
            str+=to_string(root->val);
            s.push_back(str);
        }
        str+=to_string(root->val)+"->";
        stringrecursive(root->left,str,s);
        stringrecursive(root->right,str,s);
        
        
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string>s;
        stringrecursive(root,"",s);
        return s;
    }
};
