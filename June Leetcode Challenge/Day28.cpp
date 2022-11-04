class Solution {
public:
    int minDeletions(string s) {
        vector<int>freq(26);
        for(auto x:s)
        {
            freq[x-'a']++;
        }
        sort(freq.begin(),freq.end(),greater<int>());
        int maxf=freq[0]-1;
        int totald=0;
            for(int i=1;i<=25;i++)
            {
            if(freq[i]!=0)
            {
            if(freq[i]>maxf)
            {
             if(maxf>0){
                totald+=(freq[i]-maxf) ;
             } 
                else
                {
                    totald+=freq[i];
                }
            }
            }
            maxf=min(maxf-1,freq[i]-1);
        }
        return totald;
        
    }
};
