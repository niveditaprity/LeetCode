class Solution {
public:
    string add(string s,int a)
    {
        for(int i=1;i<s.length();i+=2)
        {
             s[i] = '0' + ((s[i]-'0' + a)%10);
        }
        return s;
    }
    string rotate(string s,int b){
        int n=s.size();
        string s1=s.substr(0,n-b);
        string s2=s.substr(n-b,b);
        return s2+s1;
    }
    string findLexSmallestString(string s, int a, int b) {
      queue<string>q;
        q.push(s);
        unordered_set<string>st;
        st.insert(s);
        string ptr=s;
        while(!q.empty())
        {
            string str=q.front();
            q.pop();
            ptr=min(str,ptr);
            string adding=add(str,a);
            string rotating=rotate(str,b);
            if(st.find(adding)==st.end())
            {
                st.insert(adding);
                q.push(adding);
            }
            if(st.find(rotating)==st.end())
            {
              st.insert(rotating);
             q.push(rotating);  
            }
            
        }
       return  ptr;
    }
};
