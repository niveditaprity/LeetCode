class Solution {
public:
   vector<vector<string>> ans;
unordered_map<string, unordered_set<string>> graph;
unordered_map<string, int> visited;

vector<string> path;
void dfs(string endWord, string beginWord){
    path.push_back(endWord);
    if(beginWord == endWord){
        reverse(path.begin(),path.end());
        ans.push_back(path);
        reverse(path.begin(),path.end());
        path.pop_back();
        return;
    }
    for(auto child: graph[endWord])
    {
        dfs(child, beginWord);
    }
    path.pop_back();
}

vector<vector<string>> findLadders(string beginWord, string endWord, vector<string>& wordList) {
    unordered_set<string>st;
    for(auto x:wordList)
    {
        st.insert(x);
    }
    if(!st.count(endWord) || st.empty()) return ans;

	
    visited[beginWord] = 0;

    queue<string> q;
    q.push(beginWord);

    while(!q.empty()){
        string cur = q.front(); q.pop();
        for(int i=0; i < cur.size(); i++){
            string temp = cur;
            for(char ch='a'; ch <= 'z'; ch++){
                temp[i] = ch;
                if(temp == cur) continue;
                if(st.count(temp)){
	
                    if(!visited.count(temp)){
                        visited[temp] = 1 + visited[cur];
                        graph[temp].insert(cur);
                        q.push(temp);
                    }
                    else if(visited[temp] == 1 + visited[cur])
                        graph[temp].insert(cur);
                }
            }
        }
    }
    dfs(endWord,beginWord);
    return ans;
}
};
