class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
    int k=0;
        for(int i=digits.size()-1;i>=0;i--)
        {
            if(digits[i]==9)
            {
                digits[i]=0;
                k=1;
            }
            else
            {
                if(digits[i]+1<=9)
                {
                    digits[i]+=1;
                    k=0;
                    return digits;
                }
                else
                {
                   digits[i]=0;
                    k=1;
                }
            }
        }
        if(k==1)
        {
            digits.insert(digits.begin(),1);
        }
        return digits;
    }
};
