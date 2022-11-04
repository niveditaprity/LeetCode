class Solution {
public:
    int wiggleMaxLength(vector<int>& nums) {
      int n=nums.size();
        if(n==1)
        {
            return 1;
        }
        int pdiff = nums[1]-nums[0];
        int total=0;
        if(pdiff!=0)
        {
            total=2;
        }
        else
        {
            total=1;
        }
        for(int i=2;i<n;i++)
        {
            int cdiff=nums[i]-nums[i-1];
            if((pdiff>=0 && cdiff<0)  ||(cdiff>0 && pdiff<=0))
            {
                total++;
                pdiff=cdiff;
            }
        }
        return total;
    }
};
