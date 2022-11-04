class Solution {
public:
    bool canFormArray(vector<int>& arr, vector<vector<int>>& pieces) {
     map<int,int>mp;
        for(int i=0;i<arr.size();i++)
        {
           mp[arr[i]]=i;
        }
        
        for(int i=0;i<pieces.size();i++)
        {
            for(int j=1;j<pieces[i].size();j++)
            {
              if((mp[pieces[i][j-1]]+1)!=mp[pieces[i][j]])
              {
                  return false;
              }
            }
            if(mp.find(pieces[i][0])==mp.end()) return false;
        }
        return true;
    }
};
