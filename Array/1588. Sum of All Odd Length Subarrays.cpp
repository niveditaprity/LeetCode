class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n=arr.size();
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=arr[i];
        }

        for(int j=3;j<=n;j+=2)
        {
        vector<int>v(10001);
            int p=0;
            for(int i=0;i<j;i++)
            {
                p+=arr[i];
            }
            int c=1;
            v[0]=p;
            int k=1;
            for(int i=j;i<n;i++)
            {
                v[k]=v[k-1]+arr[i]-arr[k-1];
                    k++;
            }
            for(int i=0;i<v.size();i++)
            {
                sum+=v[i];
            }
        }
        return sum;
        
    }
};
