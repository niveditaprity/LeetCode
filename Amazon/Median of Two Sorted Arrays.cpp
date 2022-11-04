class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m=nums1.size();
        int n=nums2.size();
        double v[m+n];
    int i=0;
        int j=0;
        int k=0;
        while(i<m&&j<n)
        {
            if(nums1[i]<nums2[j])
            {
                v[k++]=nums1[i];
                i++;
            }
            else{
               v[k++]=nums2[j]; 
                j++;
            }
        }
        while(i<m)
        {
            v[k++]=nums1[i++];
        }
        while(j<n)
        {
            v[k++]=nums2[j++];
        }
        int x=m+n;
        double median=0;
        if(x%2==0)
        {
            median= (v[x/2]+v[(x/2)-1])/2;
        }
        else
        {
            median= v[x/2];
        }
        return median;
        
    }
};
