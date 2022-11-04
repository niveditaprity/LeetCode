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
    bool isUnivalTree(TreeNode* root) {
       queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            TreeNode*temp=q.front();
            q.pop();
            int x = temp->val;
            if(temp->left)
            {
                q.push(temp->left);
                if(x!=temp->left->val)
                {
                    return false;
                }
            }
            if(temp->right)
            {
                q.push(temp->right);
                if(x!=temp->right->val)
                {
                    return false;
                }
            }
        }
        return true;
    }
};
