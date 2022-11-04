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
    TreeNode*maxUtil(vector<int>&nums,int s,int e)
    {
        if(s>e)
        {
            return NULL;
        }
        if(s==e)
        {
           return new TreeNode(nums[s]);
        }
        int maxEle=INT_MIN;
        int index=-1;
        for(int i=s;i<=e;i++)
        {
            if(maxEle<nums[i])
            {
                maxEle=nums[i];
                index=i;
            }
        }
        TreeNode*node = new TreeNode(maxEle);
        node->left=maxUtil(nums,s,index-1);
        node->right=maxUtil(nums,index+1,e);
        return node;
        
    }
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
       int n=nums.size();
        return maxUtil(nums,0,n-1);
    }
};
