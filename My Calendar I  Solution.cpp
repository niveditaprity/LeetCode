class MyCalendar {
public:
    vector<pair<int,int>>v;
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
        for(auto [s,e]:v)
        {
            if(max(s,start)<min(e,end))
            {
                return false;
            }
        }
        
        v.push_back({start,end});
        return true;
    }
};
