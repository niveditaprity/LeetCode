class Solution {
public:
    vector<int> minOperations(string boxes) {
        vector<int>v;
        for(int i=0;i<boxes.size();i++)
        {
          if(boxes[i]=='1')
          {
              v.push_back(i);
          }
        }
        vector<int>ans;
        for(int i=0;i<boxes.size();i++)
        {
            int sum=0;
            for(auto x:v)
            {
                sum+=abs(x-i);
            }
            ans.push_back(sum);
        }
        return ans;
    }
};
