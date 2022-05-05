class MyStack {
public:
    MyStack() {
        
    }
    queue<int>q;
    void push(int x) {
      int n=q.size();
        q.push(x);
        for(int i=0;i<n;i++)
        {
            q.push(q.front());
            q.pop();
        }
    }
    
    int pop() {
        int top;
       if(!q.empty())
       {
           top=q.front();
           q.pop();
           return top;
       }
        return 0;
    }
    
    int top() {
               int top;
       if(!q.empty())
       {
           top=q.front();
           return top;
       }
        return 0; 
    }
    
    bool empty() {
       return q.empty(); 
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */
