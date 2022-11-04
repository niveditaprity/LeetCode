class Solution {
public:
    bool isquare(int i,int s1,int s2,int s3,int s4,vector<int>& matchsticks)
    {
    if(i==matchsticks.size())
    {
      if(s1==0 && s2==0 && s3==0 && s4==0)
      {
          return true;
      }
    else
    {
    return false;
    }
    }
    
        if(matchsticks[i]<=s1)
        {
            s1-=matchsticks[i];
            if(isquare(i+1,s1,s2,s3,s4,matchsticks))
            {
                return true;
            }
            s1+=matchsticks[i];
        }
        if(matchsticks[i]<=s2)
        {
            s2-=matchsticks[i];
            if(isquare(i+1,s1,s2,s3,s4,matchsticks))
            {
                return true;
            }
            s2+=matchsticks[i];
        }
        if(matchsticks[i]<=s3)
        {
            s3-=matchsticks[i];
            if(isquare(i+1,s1,s2,s3,s4,matchsticks))
            {
                return true;
            }
            s3+=matchsticks[i];
        }
        if(matchsticks[i]<=s4)
        {
            s4-=matchsticks[i];
            if(isquare(i+1,s1,s2,s3,s4,matchsticks))
            {
                return true;
            }
            s4+=matchsticks[i];
        }
        return false;
      
    }
    bool makesquare(vector<int>& matchsticks) {
        if(matchsticks.size()<4) return false;
       int p=0;
        for(auto x:matchsticks)
        {
            p+=x;
        }
        if(p%4!=0)
        {
            return false;
        }
        int side=p/4;
        sort(matchsticks.rbegin(),matchsticks.rend());
        if(isquare(0,side,side,side,side,matchsticks))
        {
            return true;
        }
        return false;
    }
};
