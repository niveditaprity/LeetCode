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
    int startp=0;
    TreeNode*construct(vector<int>& preorder, vector<int>& inorder,int starti,int endi)
    {
        if(starti>endi)
        {
            return NULL;
        }
        TreeNode*root=new TreeNode(preorder[startp++]);
        int k=0;
        for(int i=starti;i<=endi;i++)
        {
            if(inorder[i]==root->val)
            {
                k=i;
                break;
             }
        }
        root->left=construct(preorder,inorder, starti,k-1);
         root->right=construct(preorder,inorder, k+1, endi);
        return root;
    }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int n=preorder.size();
        if(n<=0)
        {
            return NULL;
        }
        return construct(preorder,inorder,0,n-1);
    }
};
