class Solution {
public:
    int findState(string s)
    {
        int state=0;
        for(char &ch:s)
        {
            state|=(1<<(ch-'a'));
        }
        return state;
    }
    int maxProduct(vector<string>& words) {
        int n=words.size();
        vector<int> state;
        for(auto a:words)
        {
            state.push_back(findState(a));
        }
        int ans=INT_MIN;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if((state[i]&state[j])==0)
                {
                    int l=words[i].length()*words[j].length();
                    if(ans<l)
                    {
                        ans=l;
                    }
                }
            }
        }
        return ans==INT_MIN?0:ans;
    }
};
