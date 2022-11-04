#include <bits/stdc++.h>
using namespace std;
void insert(stack<int>&arr,int val)
{
    //base condition
if(arr.size()==0)
{
    arr.push(val);
    return;
}
//hypothesis
     int temp=arr.top();
     arr.pop();
    insert(arr,val);
    //induction
    arr.push(temp);
    }
    void reverseStack(stack<int>&nums) {
        //base condition
     if(nums.size()==1)
     {
         return;
     }
     //hypothesis
     int val=nums.top();
     nums.pop();
     reverseStack(nums);
     //induction
     insert(nums,val);
        
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
	
	reverseStack(nums);
	for(int i=0;i<n;i++)
	{
	    cout<<nums.top()<<" ";
	    nums.pop();
	}
	
	return 0;
}
