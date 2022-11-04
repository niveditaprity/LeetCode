class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int count=0;
         sort(arr2.begin(),arr2.end());
        for(int i=0;i<arr1.size();i++)
        {
            int l=0,r=arr2.size()-1;
            while(l<=r)
            {
                int mid=r+(l-r)/2;
                if(abs(arr1[i]-arr2[mid])<=d)
                {
                    count++;
                    break;
                }
                if(arr2[mid]>arr1[i])
                {
                    r=mid-1;
                }
                else
                {
                    l=mid+1;
                }
                
            }
            
        }
        return arr1.size()-count;
    }
};
