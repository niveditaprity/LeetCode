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
    void dfs(TreeNode* root, vector<int>freq, int&count)
    {
      if(root==NULL)
      {
          return;
      }
      freq[root->val]++;
      dfs(root->left,freq,count);
      if(root->left== NULL && root->right==NULL)
      {
          int oddCount=0;
          for(auto x:freq)
          {
              if(x%2==1)
              {
               oddCount++;   
              }
          }
          if(oddCount<=1)
          {
              count++;
          }
      }
     dfs(root->right,freq,count);
      
    }
    int pseudoPalindromicPaths (TreeNode* root) {
     vector<int>freq(10,0);
     int count=0;
     dfs(root,freq,count);
     return count;
    }
};
