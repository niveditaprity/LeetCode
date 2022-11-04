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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
         vector<vector<int>>v;
        queue<TreeNode*>q;
        if(!root)
        {
            return v;
        }
        q.push(root);
        int level=0;
        while(!q.empty())
        {
          int n=q.size();
             vector<int>vec;
            if(level%2==0)
            {
            for(int i=0;i<n;i++)
            {
              auto value=q.front();
                q.pop();
                vec.push_back(value->val);
                
                if(value->left)
                {
                    q.push(value->left);
                }
                if(value->right)
                {
                  q.push(value->right);  
                }
                
            }
            }
            
             if(level%2!=0)
            {
            for(int i=0;i<n;i++)
            {
              auto temp=q.front();
                q.pop();
                vec.push_back(temp->val); 
                
                if(temp->left)
                {
                  q.push(temp->left);  
                }
                if(temp->right)
                {
                    q.push(temp->right);
                }
                
            }
                 reverse(vec.begin(),vec.end());
             }
                v.push_back(vec);
                 vec.clear();
                level++;
        }
            return v;
        
    }
};
