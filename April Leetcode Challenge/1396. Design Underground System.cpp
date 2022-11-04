class UndergroundSystem {
public:
    map<int,pair<string,int>>check;
    map<pair<string,string>,vector<int>>mp;
    
    UndergroundSystem() {
        
    }
    
    void checkIn(int id, string stationName, int t) {
       check[id]={stationName,t};
        
    }
    
    void checkOut(int id, string stationName, int t) {
        pair<string,int>p=check[id];
        mp[{p.first,stationName}].push_back(t-p.second);
        
    }
    
    double getAverageTime(string startStation, string endStation) {
       double avg=0;
        if(mp.find({startStation,endStation})==mp.end())
        {
            return avg;
        }
        vector<int>v=mp[{startStation,endStation}];
        for(auto x:v)
        {
            avg+=x;
        }
        return avg/v.size();
        
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */
