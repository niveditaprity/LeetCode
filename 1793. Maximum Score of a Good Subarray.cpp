class Solution {
public:
    int maximumScore(vector<int>& nums, int k) {
     int maxi=0;
        int i=k,j=k,minim=nums[k],n=nums.size();
        if (n==1) return nums[0];
        while(i>0 || j<n-1)
        {   if(i==0)
        {
            j++;
        }
          else  if(j==n-1)
            {
                i--;
            }
          else  if(nums[i-1]<nums[j+1])
            {
                j++;
            }
            else
            {
                i--;
            }
            minim=min(minim,min(nums[i],nums[j]));
            maxi=max(maxi,minim*(j-i+1));
        }
        return maxi;
    }
};
