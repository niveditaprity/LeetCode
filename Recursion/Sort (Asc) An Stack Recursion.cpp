#include <bits/stdc++.h>
using namespace std;
void insert(stack<int>&arr,int val)
    {
      if(arr.size()==0 || arr.top()>=val)
      {
        arr.push(val);
          return;
      }
        int v = arr.top();
        arr.pop();
        insert(arr,val);
        arr.push(v);
    }
    stack<int> sortStack(stack<int>& nums) {
     if(nums.size()==1)
     {
         return nums;
     }
        int val=nums.top();
        nums.pop();
        sortStack(nums);
        insert(nums,val);
        return nums;
        
    }
int main() {
	stack<int>nums;
	int n;
	cin>>n;
	for(int i=0;i<n;i++)
	 {
	    int t;
	    cin>>t;
	    nums.push(t);
	 }
	
	stack<int>v=sortStack(nums);
	for(int i=0;i<n;i++)
	{
	    cout<<v.top()<<" ";
	    v.pop();
	}
	
	return 0;
}
