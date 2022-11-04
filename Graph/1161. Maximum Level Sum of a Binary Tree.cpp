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
    int maxLevelSum(TreeNode* root) {
        if(root==nullptr)
        {
            return 0;
        }
        int level=0;
         int maxlevelsum {std::numeric_limits<int>::min()};
        int maxlevel=0;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            level++;
            int levelsum=0;
            int n=q.size();
            for(int i=0;i<n;i++)
            {
            TreeNode*temp=q.front();
            q.pop();
            if(temp->left)
            {
                q.push(temp->left);
            }
            if(temp->right)
            {
                q.push(temp->right);
            }
                levelsum+=temp->val;
            }
            if(levelsum>maxlevelsum)
            {
                maxlevelsum=levelsum;
                maxlevel=level;   
            }
            
        }
        return maxlevel;
        
        
    }
};
