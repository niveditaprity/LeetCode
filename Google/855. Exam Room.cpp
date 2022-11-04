public:
    int last;
    set<int> s;
    ExamRoom(int n) {
        last = n-1;
    }
    
    int seat() {
        if(s.empty()){  
            s.insert(0);
            return 0;
        }
        
       
        
        int left=0, diff=INT_MIN, pos=-1;
        
        
        if(s.find(0)==s.end()){
            if(*s.begin()>diff){
                diff = *s.begin();
                pos = 0;
            }
        }
        
        
        for(int right: s){
            if((right-left)/2>diff){
                diff=(right-left)/2;
                pos = left + (right-left)/2;
            }
            left = right;
        }
        
        
        if(s.find(last)==s.end()){
            if(last-left>diff){
                diff = last-left;
                pos = last;
            }
        }
        s.insert(pos);
        return pos;
    }
    
    void leave(int p) {
        s.erase(p);
    }
};
