class Solution {
public:
    int countGoodRectangles(vector<vector<int>>& rectangles) {
    
        int maxLen = 0;
    int cnt = 0;
    
    for(int i=0 ; i<rectangles.size() ; i++)
    {
        int len = min(rectangles[i][0] , rectangles[i][1]);
        
        if(len > maxLen) 
        {
            maxLen = len;
            cnt = 1;
        }
        else if(len == maxLen) cnt++;
    }
    
    return cnt;
    }
};
