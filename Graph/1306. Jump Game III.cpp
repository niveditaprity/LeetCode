class Solution {
public:
    bool canReach(vector<int>& arr, int start) {
        queue<int>q;
        q.push(start);
        int n=arr.size();
        vector<bool>visited(n,false);
        visited[start]=true;
    while(!q.empty())
    {
      int i=q.front();
        q.pop();
        visited[i]=true;
        if(arr[i]==0)
        {
            return true;
        }
        if(i+arr[i]<n&&!visited[i+arr[i]])
        {
            q.push(i+arr[i]);
            if(arr[i+arr[i]]==0)
            {
                return true;
            }
        }
        if(i-arr[i]>=0&&!visited[i-arr[i]])
        {
            q.push(i-arr[i]);
            if(arr[i-arr[i]]==0)
            {
                return true;
            }
        }
        
    }
        return false;
        
    }
};
