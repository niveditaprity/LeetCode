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

/*
APPROACH:
1. We will perform normal level order traversal
2. Just we will keep track of level number 
    if level_num is even -> we'll do L->R traversal
    else we'll do R->L traversal
*/
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root == NULL){
            return ans;
        }
        vector<int> v;
        queue<TreeNode*> q;
        q.push(root);
        q.push(NULL);
        
        // Initially level will be zero
        int level = 0; 
        while(!q.empty())
        {
            TreeNode* temp = q.front();
            q.pop();
            if(temp == NULL)
            {
                // 1 level has completely traversed
                
                // Only yhis part is different
                level++;
                if(level % 2 == 0)
                {
                    // Even level L->R traversal
                    reverse(v.begin(),v.end());
                }
                
                
                ans.push_back(v);
                v.clear();
                if (!q.empty())
                {
                    // Queue still has elements in next level
                    q.push(NULL);
                }
            }
            else
            {
                v.push_back(temp->val);
                if (temp->left)
                {
                    q.push(temp->left);
                }
                if (temp->right)
                {
                    q.push(temp->right);
                }
            }
        }
        return ans;
    }
};
