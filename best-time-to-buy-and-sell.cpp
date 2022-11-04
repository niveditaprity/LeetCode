class Solution {
public:
    int maxProfit(vector<int>& arr) {
        int n=arr.size();
        int naxprof=0,j=0;
        for(int i=1;i<n;i++)
        {
            int c=arr[i]-arr[j];
            if(c>naxprof)
            {
                naxprof=c;
            }
            if(arr[i]<arr[j])
            {
                j=i;
            }
        }
        return naxprof;
        
    }
};
