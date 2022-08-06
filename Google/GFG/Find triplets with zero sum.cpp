class Solution{
  public:
    //Function to find triplets with zero sum.
    bool findTriplets(int arr[], int n)
    { 
      sort(arr,arr+n);
      int count = 0;
      for(int i=0;i<n-2;i++)
      {
          int sum = arr[i];
          int l = i+1,r=n-1;
          while(l<r)
          {
              if(sum+arr[l]+arr[r]==0)
              {
                  return true;
              }
              else if(sum+arr[l]+arr[r]<0)
              {
                  l++;
              }
              else
              {
                  r--;
              }
          }
      }
       return false;//Your code here  //Your code here
    }
};
