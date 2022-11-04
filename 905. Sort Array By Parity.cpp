class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
     int i=0,j=A.size()-1;
        while(i<j)
        {
            if(A[j]%2==0)
            {
                if(A[i]%2!=0)
                {
                    int num=A[j];
                    A[j]=A[i];
                    A[i]=num;
                    i++;
                    j--;
                }
                else
                {
                   i++; 
                }
            }
            else
            {
                j--;
            }
        }
        return A;
    }
};
