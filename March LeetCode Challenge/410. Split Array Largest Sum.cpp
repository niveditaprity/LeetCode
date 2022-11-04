class Solution {
public:
    int splitArray(vector<int>& nums, int m) {
     
        int l=0,r=0;
        for(auto x:nums)
        {
            l=max(x,l);
            r+=x;
        }
        while(l<=r)
        {
        int mid=l+(r-l)/2;
            
            int totals=0,count=0;
            for(auto i:nums)
            {
                if(totals+i>mid)
                {
                    totals=0;
                    count++;
                }
                totals+=i;
                if(count>m)
                {
                    break;
                }
            }
            if(count<m)
            {
                r=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        return l;
    }
};
