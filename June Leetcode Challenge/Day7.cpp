class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        while(n>0||m>0)
        {
            if(m>0 and (n==0 or (nums1[m-1]>nums2[n-1])))
            {
                nums1[m+n-1]=nums1[m-1];
                m--;
            }
            else
            {
                nums1[m+n-1]=nums2[n-1];
                n--;
            }
        }
         
    }
};
