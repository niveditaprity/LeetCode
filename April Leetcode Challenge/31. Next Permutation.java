class Solution {
    public void reverse(int[] nums,int i,int j)
    {
        while(i<=j)
        {
            int t=nums[i];
            nums[i++]=nums[j];
            nums[j--]=t;
        }
    }
    public void nextPermutation(int[] nums) {
        int i,j;
        int n=nums.length;
        for(i=n-2;i>=0;i--)
        {
            if(nums[i]<nums[i+1])
            {
                break;
            }
        }
        if(i<0)
        {
           reverse(nums,0,n-1);
        }
        else
        {
            for(j=n-1;j>=0;j--)
            {
                if(nums[j]>nums[i])
                {
                    break;
                }
            }
            int t=nums[i];
            nums[i]=nums[j];
            nums[j]=t;
            reverse(nums,i+1,n-1);
        }
    }
}
