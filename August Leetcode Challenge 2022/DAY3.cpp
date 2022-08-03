class MyCalendar {
public:
    set<pair<int,int>>v;
    MyCalendar() {
        
    }
    
    bool book(int start, int end) {
     auto it = v.upper_bound({start,end});
     if(it!=v.end() && it->second<end)
     {
         return false;
     }
    v.insert({end,start});
    return true;
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */
