class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        
        int m=pushed.size();
        int n=popped.size();
        if(m!=n)
        {
            return false;
        }
        
        int i=0,j=0;
        stack<int>st;
        while(i<m)
        {
            st.push(pushed[i]);
            while(!st.empty()&&st.top()==popped[j] &&j<n)
            {
                st.pop();
                j++;
            }
            i++;
        }
        return j==n;
        
    }
};
