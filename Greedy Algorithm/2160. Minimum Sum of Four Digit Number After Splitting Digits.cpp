class Solution {
public:
    int minimumSum(int num) {
        vector<int>v;
        while(num>0)
        {
            int d=num%10;
            num=num/10;
            v.push_back(d);
        }
        sort(v.begin(),v.end());
        int p=v[0]*10+v[2];
        int q=v[1]*10+v[3];
        return p+q;
        
    }
};
