class Solution {
public:
    void merge(vector<pair<int,int>>&arr,vector<int>&count,int l,int mid,int r)
    {
      vector<pair<int,int>>temp(r-l+1);
      int i=l,j=mid+1,k=0;
      while(i<=mid && j<=r)
      {
          if(arr[i].first<=arr[j].first)
          {
              temp[k++]=arr[j++];
          }
          else
          {
              count[arr[i].second]+=r-j+1;
              temp[k++]=arr[i++];
          }
      }
        while(i<=mid){
            temp[k++] = arr[i++];
        }
        while(j<=r){
            temp[k++] = arr[j++];
        }
        
        for(int i=l;i<=r;i++){
            arr[i] = temp[i-l];
        }
        
    }
    void mergeSort(vector<pair<int,int>>&arr,vector<int>&count,int l,int r)
    {
        if(l>=r)
          return;
        int mid=(l+r)/2;
        mergeSort(arr,count,l,mid);
        mergeSort(arr,count,mid+1,r);
        merge(arr,count,l,mid,r);
            
        
    }
    vector<int> countSmaller(vector<int>& nums) {
      int n=nums.size();
      vector<pair<int,int>>arr(n);
      for(int i=0;i<n;i++)
      {
          arr[i]={nums[i],i};
      }
      vector<int>count(n,0);
      mergeSort(arr,count,0,n-1);
      return count;
    }
};
