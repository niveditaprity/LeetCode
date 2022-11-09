//https://leetcode.com/problems/next-permutation/

class Solution {
public:
    void nextPermutation(vector<int>& nums) {
     int n = nums.size();
     int index,number;
    for(index=n-2;index>=0;index--)
    {
     
      if(nums[index]<nums[index+1])
      {
          number = nums[index];
          break;
       }
    }
    if(index<0)
    {
        
    reverse(nums.begin(),nums.end());
    }
    else
    {
    int j;
    for(j=n-1;j>=0;j--)
    {
        if(nums[index] <nums[j])
        {
            break;
        }
    }
        //cout<<index<<j<<"\n";
     swap(nums[index],nums[j]);
     sort(nums.begin()+index+1,nums.end());
        }
    }
};

