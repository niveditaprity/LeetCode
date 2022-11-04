class Solution {
public:
    int maxArea(int h, int w, vector<int>& horizontalCuts, vector<int>& verticalCuts) {
       int i,maxh=0,maxv=0,p1=0,p2=0;
        
        horizontalCuts.push_back(h);
        verticalCuts.push_back(w);
        
        sort(horizontalCuts.begin(),horizontalCuts.end());
        sort(verticalCuts.begin(), verticalCuts.end());
        
        for(i=0;i<horizontalCuts.size();i++){
            maxh=max(maxh,horizontalCuts[i]-p1);
            p1=horizontalCuts[i];
        }
        for(i=0;i<verticalCuts.size();i++){
            maxv=max(maxv,verticalCuts[i]-p2);
            p2=verticalCuts[i];
        }
         
         return (int)((long)maxh*maxv%1000000007);
    }
};
