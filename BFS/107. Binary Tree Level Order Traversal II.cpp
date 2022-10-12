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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> ans;
        vector<int>v;
        if(root == NULL ){
            return ans;
        }
        queue<TreeNode *> q;
        stack<int>st;
        
        q.push(root);
        q.push(NULL);
        
        while (!q.empty())
        {
            TreeNode *temp = q.front();
            q.pop();
            if (temp != NULL)
            {
                st.push(temp->val);
                if (temp->right)
                {
                    q.push(temp->right);
                }
                if (temp->left)
                {
                    q.push(temp->left);
                }
            }
            else
            {
                // 1 level has completely traversed
                if (!q.empty())
                {
                    // Queue still has elements in next level
                    st.push(INT_MIN);
                    q.push(NULL);
                }
            }
        }
        while(!st.empty()){
            int Node = st.top();
            st.pop();
            if(Node == INT_MIN){
                ans.push_back(v);
                v.clear();
            }
            else{
                v.push_back(Node);
            }
        }
        ans.push_back(v);
        return ans;
    }
};
