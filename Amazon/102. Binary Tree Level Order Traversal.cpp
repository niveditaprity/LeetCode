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
        vector<vector<int>>v;
        if(root==NULL)
        {
            return v;
        }
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
             int i=q.size();
            vector<int>level;
            while(i!=0)
            {
                TreeNode*temp=q.front();
              level.push_back(temp->val);
                if(temp->left)
                {
                    q.push(temp->left);
                }
                if(temp->right)
                {
                    q.push(temp->right);
                }
                q.pop();
                i--;
            }
            v.push_back(level);
            
            
            
        }
        return v;
    }
};
