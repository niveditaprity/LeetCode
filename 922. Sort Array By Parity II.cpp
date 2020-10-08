class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& A) {
        vector<int>a;
        vector<int>b;
        for(int i=0;i<A.size();i++)
        {
            if(A[i]%2==0)
            {
                a.push_back(A[i]);
            }
            else
            {
                b.push_back(A[i]);
            }
        }
        int c=0,d=0;
        for(int i=0;i<A.size();i++)
        {
            if(i%2==0)
            {
                A[i]=a[c++];
            }
            else
            {
                A[i]=b[d++];
            }
        }
      return A;  
    }
};
