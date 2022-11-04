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
    int MONITORED = -1, IS_CAMERA = 0, NEED_CAMERA = 1;
    int count = 0;
    int minCameraCover(TreeNode* root) {
        int rootCameraInfo = cameraNodeInfo(root);
        
		
        if(rootCameraInfo == NEED_CAMERA) return count + 1;
        
        return count;
    }
    
    
    
    
    int cameraNodeInfo(TreeNode* root){
        if(root == NULL) return MONITORED;
        
        int left  = cameraNodeInfo(root->left);
        int right = cameraNodeInfo(root->right);
        
		
        if(left == NEED_CAMERA || right == NEED_CAMERA){
            count++;
            return IS_CAMERA;
        }
      
        else if (left == IS_CAMERA || right == IS_CAMERA) return MONITORED;
        
		
        return NEED_CAMERA;
    }
};
