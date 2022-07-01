class Solution {
public:
    bool static comp(vector<int>&a,vector<int>&b)
    {
        return a[1]>b[1];
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        sort(boxTypes.begin(),boxTypes.end(),comp);
        int tt=0,nbox=0,ans=0,i=0;
        for(i=0;i<boxTypes.size();i++)
        {
            nbox+=boxTypes[i][0];
            if(nbox<=truckSize)
            {
              tt+=boxTypes[i][0];
              ans+=boxTypes[i][1]*boxTypes[i][0];
            }
            else
            {
                break;
            }
        }
        if(tt<truckSize && i<boxTypes.size())
        {
          ans+=(truckSize-tt)*boxTypes[i][1];  
        }
        return ans;
    }
};
