#include <bits/stdc++.h>
using namespace std;
void insert(vector<int>&arr,int val)
    {
      if(arr.size()==0 || arr[arr.size()-1]<=val)
      {
        arr.push_back(val);
          return;
      }
        int v = arr[arr.size()-1];
        arr.pop_back();
        insert(arr,val);
        arr.push_back(v);
    }
    vector<int> sortArray(vector<int>& nums) {
     if(nums.size()==1)
     {
         return nums;
     }
        int val=nums[nums.size()-1];
        nums.pop_back();
        sortArray(nums);
        insert(nums,val);
        return nums;
        
    }
int main() {
	vector<int>nums;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	 {
	    int t;
	    cin>>t;
	    nums.push_back(t);
	 }
	
	vector<int>v=sortArray(nums);
	for(int i=0;i<n;i++)
	{
	    cout<<v[i]<<" ";
	}
	
	return 0;
}
