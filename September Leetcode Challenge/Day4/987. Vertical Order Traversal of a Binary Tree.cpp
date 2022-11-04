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
    void preorder(TreeNode* root, map<int, vector<pair<int, int>>>&mp,int level, int index)
    {
        if(root == NULL)
        {
            return;
        }
        mp[index].push_back({level, root->val});
        preorder(root->left, mp, level+1, index-1);
        preorder(root->right, mp, level+1, index+1);
        
        
    }
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        
        map<int,vector<pair<int,int>>>mp;
        preorder(root,mp,0,0);
        vector<vector<int>>ans;
        for(auto x:mp)
        {
            sort(x.second.begin(),x.second.end());
            vector<int>temp;
            for(auto pair : x.second)
            {
                temp.push_back(pair.second);
            }
            ans.push_back(temp);
        }
      return ans;
    }
};
