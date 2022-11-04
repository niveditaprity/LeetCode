class FreqStack {
public:
    map<int,int>freq;
    map<int,stack<int>>st;
    int maxfreq=0;
    FreqStack() {
        
    }
    
    void push(int val) {
        freq[val]++;
        st[freq[val]].push(val);
        maxfreq=max(maxfreq,freq[val]);
        
    }
    
    int pop() {
        if(st[maxfreq].empty())
        {
            maxfreq--;
        }
        int x= st[maxfreq].top();
        freq[x]--;
        st[maxfreq].pop();
        return x;
        
    }
};

/**
 * Your FreqStack object will be instantiated and called as such:
 * FreqStack* obj = new FreqStack();
 * obj->push(val);
 * int param_2 = obj->pop();
 */
