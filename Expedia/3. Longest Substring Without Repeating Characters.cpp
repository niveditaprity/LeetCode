class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int p1=0,p2=0,count =0,max=0;
        unordered_map<char,int>mp;
        while(p1<=p2&&p1<s.size()&&p2<s.size())
        {
            if(mp[s[p2]]>0)
            {
                while(mp[s[p2]]>0)
                {
                    mp[s[p1]]=0;
                    p1++;
                }
                count=p2-p1;
            }
            if(mp[s[p2]]==0)
            
            {
                mp[s[p2]]=1;
                count++;
            }
            if(count>max)
            {
                max=count;
            }
            p2++;
        }
        return max;
        
    }
};
