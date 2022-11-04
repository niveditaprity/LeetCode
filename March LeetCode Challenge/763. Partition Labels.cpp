class Solution {
public:
    vector<int> partitionLabels(string s) {
       
        map<int,int>last_index;
        int n=s.size();
        for(int i=0;i<n;i++)
        {
            last_index[s[i]-'a']=i;
        }
        vector<int>ans;
        int start=0,maxindex=0;
        for(int i=0;i<n;i++)
        {
            maxindex=max(maxindex,last_index[s[i]-'a']);
            if(i==maxindex)
            {
                ans.push_back(i-start+1);
                start=i+1;
            }
        }
        return ans;
    }
};
