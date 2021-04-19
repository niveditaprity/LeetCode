class Solution {
public:
    int busyStudent(vector<int>& startTime, vector<int>& endTime, int queryTime) {
        int count=0;
        int m=startTime.size();
        int n=endTime.size();
        for(int i=0;i<m;i++)
        {
           if(startTime[i]<=queryTime && endTime[i]>=queryTime)
           {
               count++;
           }
        }
       return count; 
    }
};
