class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
      vector<long>count(101,0);
        int mod=1e9+7;
        long res=0;
        for(auto x:arr)
        {
            count[x]+=1;
        }
        for(int i=0;i<=100;i++)
        {
            for(int j=i;j<=100;j++)
            {
                int k=target-i-j;
                if(k<j || k>=count.size())
                {
                    continue;
                }
                if(count[i]==0 || count[j]==0 || count[k]==0)
                {
                    continue;
                }
                if(i==j && j==k)
                {
                    res=(res+count[i]*(count[i]-1)*(count[i]-2)/6)%mod;
                }
                else if(i<j && j<k)
                {
                    res=(res+count[i]*count[j]*count[k])%mod;
                }
                else if(i==j && j!=k)
                {
                    res=(res+count[k]*count[i]*(count[i]-1)/2)%mod;
                }
                else if(i!=j && j==k)
                {
                    res=(res+count[i]*count[j]*(count[j]-1)/2)%mod;
                }
                
            }
        }
        return res;
    }
};
