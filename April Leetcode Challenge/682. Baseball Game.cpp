class Solution {
public:
    int calPoints(vector<string>& ops) {
       stack<int>st;
        for(int i=0;i<ops.size();i++)
        {
            if(ops[i]=="C")
            {
                st.pop();
            }
            else if(ops[i]=="D")
            {
                st.push(st.top()*2);
            }
            else if(ops[i]=="+")
            {
                int f=st.top();
                st.pop();
                int s=st.top();
                st.push(f);
                st.push(f+s);
            }
            else
            {
                st.push(stoi(ops[i]));
            }
        }
        int sum=0;
        while(!st.empty())
        {
            sum+=st.top();
            st.pop();
        }
        return sum;
    }
};
