class Solution {
    public int largestPerimeter(int[] nums) {
        int n = nums.length;
        int i = n-3;
        int j = n-1;
        Arrays.sort(nums);
       while(i>=0){
          
         if(nums[j]<nums[i]+nums[i+1]){
           return nums[j]+nums[i]+nums[i+1];
         }
         
          i--;
          j--;
       }
      return 0;
    }
}
