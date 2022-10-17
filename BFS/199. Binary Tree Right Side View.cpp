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
class Solution
{
public:
    vector<int> rightSideView(TreeNode *root)
    {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        // Make ans vector
        vector<int> ans;
        if (root == NULL)
        {
            return ans;
        }
        // Create map to store first right value for each level
        map<int, int> mp;
        
        // Make queue This queue will hold Node and level
        queue<pair<TreeNode *, int>> q; 
        
        // For root level will be 0
        q.push(make_pair(root, 0));
        while (!q.empty())
        {
            pair<TreeNode *, int> temp = q.front();
            q.pop();
            
            // Extract front node and level 
            TreeNode *frontNode = temp.first;
            int lvl = temp.second;
            
            // Only store first Node from right for each level in map
            if (mp.find(lvl) == mp.end())
            {
                mp[lvl] = frontNode->val;
            }
            
            // First process right part
            if (frontNode->right)
            {
                q.push(make_pair(frontNode->right, lvl + 1));
            }
            //Then process left part
            if (frontNode->left)
            {
                q.push(make_pair(frontNode->left, lvl + 1));
            }
        }
        for (auto i : mp)
        {
            ans.push_back(i.second);
        }
        return ans;
    }
};
