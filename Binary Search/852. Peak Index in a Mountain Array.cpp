class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int start = 0;
        int end = arr.size() - 1 ;
        int mid = start + (end - start)/2;
        while(start<end)
        {
            if(arr[mid] < arr[mid+1]) //element lie on line 1
            {
                start = mid + 1;
            }
            else {
                end = mid;          //element lie on line 2
            }
            mid = start + (end - start)/2;
        }
        return start;
    }
};
