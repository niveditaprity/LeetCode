class Solution {
public:
    bool has(TreeNode *root,int sum)
    { 
        if(!root)return false;
        sum=sum-root->val;
        if(!root->left&&!root->right&&sum==0)return true;
        return has(root->left,sum)||
               has(root->right,sum);
    }
    
    bool hasPathSum(TreeNode* root, int sum) {
        if(root==NULL)return false;
        return has(root,sum);
        
        
    }
};
