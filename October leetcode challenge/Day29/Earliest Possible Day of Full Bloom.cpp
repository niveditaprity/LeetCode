class Solution {
public:
    static bool comp(pair<int,int>p1,pair<int,int>p2){
     
     return p1.second > p2.second;
 }
int earliestFullBloom(vector<int>& plantTime, vector<int>& growTime) {
    
        int ans =0,start=0;
      vector<pair<int,int>>pair;
    
    for(int i=0;i<plantTime.size();i++)
    pair.push_back({plantTime[i],growTime[i]});
    
    sort(pair.begin(),pair.end(),comp);
    
    for(int i=0;i<plantTime.size();i++){
        
        start += pair[i].first;
        ans=max(ans,start + pair[i].second);
    }
    
    
    return ans;
}
};
