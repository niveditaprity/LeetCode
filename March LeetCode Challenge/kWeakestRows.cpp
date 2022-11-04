class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        set<pair<int,int>>s;
        for(int i=0;i<mat.size();i++)
        {
            int count=0;
            for(int j=0;j<mat[i].size();j++)
            {
              if(mat[i][j]==1)
              {
                  count++;
              }
            }
            s.insert({count,i});
        }
        vector<int>v;
        for(auto x=begin(s);k>0;k--,x++)
        {
            v.push_back(x->second);
        }
        return v;
      
    }
};
