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
    vector<vector<int>> levelOrder(TreeNode* root) {
     
        queue<TreeNode*>q;
        q.push(root);
        vector<vector<int>>ans;
        if(!root){
            return ans;
        }
        while(!q.empty())
        {
            int n=q.size();
            vector<int>level;
            for(int i=0;i<n;i++)
            {
                TreeNode*data=q.front();
                q.pop();
                level.push_back(data->val);
                if(data->left!=NULL)
                {
                 q.push(data->left);   
                }
                if(data->right!=NULL)
                {
                 q.push(data->right);   
                }
            }
            ans.push_back(level);
        }
        return ans;
        
    }
};
