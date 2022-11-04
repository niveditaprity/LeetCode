class Solution {
public:
    vector<int>ans;
    int countDigit(int n)
    {
        int count = 0;
        while(n>0)
        {
            count++;
            n=n/10;
        }
    return count;
    }
    
    void findNumber(int num, int n, int k)
    {
        if(countDigit(num)==n)
        {
            ans.push_back(num);
            return;
        }
        for(int i=0;i<=9;i++)
        {
            int ld=num%10;
            if(abs(ld-i)== k)
            {
                findNumber(num*10+i,n,k);
            }
        }
    }
    vector<int> numsSameConsecDiff(int n, int k) {
      
        for(int i=1;i<=9;i++)
        {
            findNumber(i,n,k);
        }
        return ans;
    }
};
