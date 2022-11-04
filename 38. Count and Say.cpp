class Solution {
public:
    string recursivestr(int n)
    {
        string s="";
    if(n==1)
    {
     return "1";
    }
        else
        {
            string str=countAndSay(n-1);
            int p=str.size();
            char c=str[0];
            int count=1;
            for(int i=1;i<p;i++)
            {
             if(c==str[i])
             {
                 count++;
             }
                else
                {
                    s+=(count+'0');
                    s+=c;
                    c=str[i];
                    count=1;
                    
                }
                
            }
            s+=(count+'0');
                    s+=c;
            return s;
        }
        
    }
    string countAndSay(int n) {
        
      return recursivestr(n);  
    }
};
