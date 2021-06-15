class Solution {
public:
    bool static sorted( vector<int>v1,vector<int>v2 )
    {
    return v1[1] > v2[1];
     }
    int maximumUnits(vector<vector<int>>& vect, int truckSize) {
       sort(vect.begin(), vect.end(),sorted);
       int sum=0;
        int n=0,i;
        int t=0;
        for( i=0;i<vect.size();i++)
        {
            n+=vect[i][0];
            if(n<=truckSize)
            {
                sum+=(vect[i][1]*vect[i][0]);
                t+=vect[i][0];
                
            }
            else
            {
                break;
            }
        }
        if(t<truckSize&&i<vect.size())
        {
            sum+=((truckSize-t)*vect[i][1]);
        }
        
        return sum;
    }
};
