class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
        horizontalCuts.push_back(0);
        horizontalCuts.push_back(h);
        verticalCuts.push_back(0);
        verticalCuts.push_back(w);
        
        sort(horizontalCuts.begin(),horizontalCuts.end());
        sort(verticalCuts.begin(),verticalCuts.end());
        
        long l=0,b=0;
        for(int i=1;i<horizontalCuts.size();i++)
        {
            if(l<horizontalCuts[i]-horizontalCuts[i-1])
            {
                l=horizontalCuts[i]-horizontalCuts[i-1];
            }
        }
        for(int i=1;i<verticalCuts.size();i++)
        {
            if(b<verticalCuts[i]-verticalCuts[i-1])
            {
                b=verticalCuts[i]-verticalCuts[i-1];
            }
        }
        
        
        return (l*b)%(1000000007);
        
    }
};
