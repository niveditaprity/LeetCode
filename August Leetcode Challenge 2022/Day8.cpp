class Solution {
public: 
int binary_search(vector<int>&v , int l ,int r,int x)
{
   while(l<r)
   {
       int mid=l+(r-l)/2;
       if(v[mid]>=x)
       {
           r=mid;
       }
       else
       {
           l=mid+1;
       }
   }
    return r;
}
    
    int lengthOfLIS(vector<int>& nums) {
        vector<int>v;
        int n = nums.size();
        v.push_back(nums[0]);
        for(int i=1;i<n;i++)
        {
           if(nums[i]>v[v.size()-1])
           {
               v.push_back(nums[i]);
           }
            else
            {
                int j= binary_search(v,0,v.size()-1,nums[i]);
                v[j]=nums[i];
            }
        }
        return v.size();
    }
};
