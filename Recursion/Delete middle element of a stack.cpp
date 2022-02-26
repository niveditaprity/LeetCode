class Solution
{
    public:
    //Function to delete middle element of a stack.
    
    int x=0;
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
       if(x==sizeOfStack/2)
       {
           s.pop();
           return;
       }
       int val=s.top();
       x+=1;
       s.pop();
       deleteMid(s,sizeOfStack);
       s.push(val);
       // code here.. 
    }
};
