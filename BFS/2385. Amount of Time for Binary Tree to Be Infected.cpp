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
private:
    TreeNode* createNodeToParentMapping(TreeNode *root, int target, unordered_map<TreeNode *, TreeNode *> &NodeToParent)
    {
        // This function does both Step1 and Step2
        TreeNode *targetNode = NULL;
        // Level order traversal to create mapping
        queue<TreeNode *> q;
        q.push(root);
        NodeToParent[root] = NULL;
        while (!q.empty())
        {
            TreeNode *temp = q.front();
            q.pop();

            if (temp->val == target)
            {
                targetNode = temp;
            }

            if (temp->left)
            {
                NodeToParent[temp->left] = temp;
                q.push(temp->left);
            }

            if (temp->right)
            {
                NodeToParent[temp->right] = temp;
                q.push(temp->right);
            }
        }
        return targetNode;
    }

    int infectTree(TreeNode *targetNode, unordered_map<TreeNode *, TreeNode *> &NodeToParent)
    {
        // This function will perfor step 3
        // Created map for already burned tree
        unordered_map<TreeNode *, bool> infected;

        // Doing level order traversal
        queue<TreeNode *> q;
        q.push(targetNode);
        infected[targetNode] = true;

        int mintime = 0;
        while (!q.empty())
        {
            bool queueInsertion = false;
            int size = q.size();
            for (int i = 0; i < size; i++)
            {
                // Process all the neighbours
                TreeNode *temp = q.front();
                q.pop();

                // 3 neighbours
                // left, right, parent
                if (temp->left && infected[temp->left] != true)
                {
                    q.push(temp->left);
                    infected[temp->left] = true;
                    queueInsertion = true;
                }
                if (temp->right && infected[temp->right] != true)
                {
                    q.push(temp->right);
                    infected[temp->right] = true;
                    queueInsertion = true;
                }
                if (NodeToParent[temp] && infected[NodeToParent[temp]] != true)
                {
                    q.push(NodeToParent[temp]);
                    infected[NodeToParent[temp]] = true;
                    queueInsertion = true;
                }
            }
            if (queueInsertion == true)
            {
                mintime++;
            }
        }
        return mintime;
    }

public:
    int amountOfTime(TreeNode* root, int target) 
    {
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        unordered_map<TreeNode *, TreeNode *> NodeToParent;
        TreeNode *targetNode = createNodeToParentMapping(root, target, NodeToParent);
        int mintime = infectTree(targetNode, NodeToParent);
        return mintime;
    }
};
