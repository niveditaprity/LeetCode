class Solution {
public:
    int m=INT_MIN;
    int count=0;
    void helper(TreeNode*root,int m)
    {
        if(!root)return;
      if(root->val>=m)
      {
          count++;
          m=root->val;
      }
        helper(root->left,m);
        helper(root->right,m);
        
    }
    int goodNodes(TreeNode* root) {
helper(root,m);
        return count;
        
    }
};
