class Solution {
public:
    string getSmallestString(int n, int k) {
     string ans(n,'a');
     k=k-n;
   int i=n-1;
        while(k>0)
        {
            int t=min(25,k);
            ans[i]+=t;
            k=k-t;
            i--;
        }
        return ans;
        
        
    }
};
