/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>>v;
        if(root==NULL)
        {
            return v;
        }
        int level=0;
        queue<Node*>q;
        q.push(root);
        while(!q.empty())
        {
            int n=q.size();
            vector<int>vec;
            for(int i=0;i<n;i++)
            {
                Node* value=q.front();
                q.pop();
                vec.push_back(value->val);
                for(auto x:value->children)
                {
                    q.push(x);
                }
            }
            v.push_back(vec);
            level++;
            
        }
        
    return v;
        
    }
};
