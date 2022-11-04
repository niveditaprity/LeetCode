class Solution {
public:
    bool hasPathSum(TreeNode* root, int sum) {
        if(root==NULL)
        {
            return 0;
        }
        
        stack<pair<TreeNode*,int>>s;
        s.push({root,sum-root->val});
        while(!s.empty())
        {
            pair<TreeNode*,int>temp=s.top();
            s.pop();
            if(temp.first->left==NULL&&temp.first->right==NULL&&temp.second==0)
            {
                return true;
            }
            if(temp.first->left)
            {
                s.push({temp.first->left,temp.second-temp.first->left->val});
            }
            if(temp.first->right)
            {
                s.push({temp.first->right,temp.second-temp.first->right->val});
            }
            
            
            
        }
        return false;
        
    }
};
