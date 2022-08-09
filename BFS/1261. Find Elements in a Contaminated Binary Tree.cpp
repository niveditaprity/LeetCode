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
class FindElements {
public:
    unordered_map<int,bool>mp;
    FindElements(TreeNode* root) {
       root->val=0;
       queue<TreeNode*>q;
        q.push(root);
        mp[root->val]=true;
        while(!q.empty())
        {
         TreeNode*temp = q.front();
            q.pop();
            if(temp->left)
            {
                temp->left->val= 2*temp->val + 1;
                mp[temp->left->val]=true;
                q.push(temp->left);
            }
            if(temp->right)
            {
                temp->right->val= 2*temp->val + 2;
                mp[temp->right->val]=true;
                q.push(temp->right);
            }
            }
        }
    
    bool find(int target) {
      return mp[target];  
    }
};

/**
 * Your FindElements object will be instantiated and called as such:
 * FindElements* obj = new FindElements(root);
 * bool param_1 = obj->find(target);
 */
