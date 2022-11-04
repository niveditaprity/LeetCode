class Solution {
    public int maxArea(int[] height) {
        int i=0,j=height.length-1;
        int amount=0;
        while(i<j)
        {
            amount=Math.max(amount,(j-i)*Math.min(height[i],height[j]));
            if(height[i]<height[j])
            {
                i++;
            }
            else
            {
                j--;
            }
        }
       return amount;
    }
}
