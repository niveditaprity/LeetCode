class Solution {
public:
    vector<vector<int>>graph;
    vector<bool>visited;
    
    void dfs(int i,vector<int>&index,vector<char>&letters,string &s)
    {
        visited[i]=true;
        index.push_back(i);
        letters.push_back(s[i]);
        for(int u:graph[i])
        {
            if(!visited[u])
            {
                dfs(u,index,letters,s);
            }
        }
    }
    string smallestStringWithSwaps(string s, vector<vector<int>>& pairs) {
        int n=s.size();
        graph.resize(n);
        visited.resize(n,false);
        
        for(auto x:pairs)
        {
            graph[x[0]].push_back(x[1]);
            graph[x[1]].push_back(x[0]);
        }
       
        for(int i=0;i<n;i++)
        {
             vector<int>index;
            vector<char>letters;
            if(!visited[i])
            {
                dfs(i,index,letters,s);
            }
            sort(index.begin(),index.end());
            sort(letters.begin(),letters.end());
            
            for(int i=0;i<index.size();i++)
            {
                s[index[i]]=letters[i];
            }
        }
        
        return s;
    }
};
