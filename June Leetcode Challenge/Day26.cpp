class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
       int sum=0;
        for(int i=0;i<k;i++)
        {
            sum+=cardPoints[i];
        }
        int maxsum=sum;
        for(int i=k-1;i>=0;i--)
        {
            sum-=cardPoints[i];
            sum+=cardPoints[cardPoints.size()-k+i];
            maxsum=max(sum,maxsum);
        }
        return maxsum;
    }
};
