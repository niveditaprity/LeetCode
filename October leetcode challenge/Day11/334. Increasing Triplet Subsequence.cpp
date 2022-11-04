class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
      int first = INT_MAX,second = INT_MAX;
      for(auto x: nums)
      {
          if(x<first)
          {
              first = x;
          }
          else if(first < x && x < second)
          {
              second = x;
          }
          else if(x > second)
          {
              return true;
          }
      }
        return false;
    }
};
