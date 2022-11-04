class Solution {
public:
    int candy(vector<int>& ratings) {
      int n=ratings.size();
      int i=1;
      int totalcandy=n;
        while(i<n)
        {
            if(i<n && ratings[i]==ratings[i-1])
            {
                i++;
                continue;
            }
            int peak=0;
            while(ratings[i]>ratings[i-1])
            {
                peak++;
                totalcandy+=peak;
                i++;
                if(i==n)
                {
                    return totalcandy;
                }
            }
            int valley=0;
            while(i<n &&ratings[i]<ratings[i-1] )
            {
                valley++;
                totalcandy+=valley;
                i++;
            }
            totalcandy-=min(peak,valley);
        }
        return totalcandy;
    }
};
