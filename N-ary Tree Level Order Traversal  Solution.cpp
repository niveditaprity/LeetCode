class Solution {
public:
    vector<vector<int>> levelOrder(Node* root) {
        vector<vector<int>>v;
        if(root==NULL)
        {
            return v;
        }
        queue<Node*>q;
        q.push(root);
        while(!q.empty())
        {
            vector<int>vec;
            int n=q.size();
            for(int i=0;i<n;i++)
            {
            Node*temp=q.front();
            q.pop();
                vec.push_back(temp->val);
                for(auto x:temp->children)
                {
                  q.push(x);  
                }
                
            }
            v.push_back(vec);
            
        }
        return v; 
        
    }
};
