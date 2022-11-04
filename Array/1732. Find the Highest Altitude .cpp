class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        vector<int>v(gain.size()+1);
        v[0]=0;
        int max=v[0];
        for(int i=1;i<gain.size()+1;i++)
        {
           v[i]=v[i-1]+gain[i-1]; 
            if(max<v[i])
            {
                max=v[i];
            }
        }
        return max;
        
    }
};
