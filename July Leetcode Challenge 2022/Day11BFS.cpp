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
    vector<int> rightSideView(TreeNode* root) {
        
       vector<int>v;
        if(root==NULL)
        {
            return v;
        }
        
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            int ls=q.size();
            int a=0;
            while(ls--)
            {
                TreeNode*data=q.front();
                 q.pop();
                a=data->val;
                if(data->left!=NULL)
                {
                    q.push(data->left);
                }
                if(data->right!=NULL)
                {
                    q.push(data->right);
                }
            }
            v.push_back(a);
        }
        return v;
    }
};
