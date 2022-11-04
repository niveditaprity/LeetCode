class Solution
{
	public:
	    void generate(int i,string s,vector<string>&ans)
	    {
	        if(i==s.size())
	        {
	            ans.push_back(s);
	            return;
	        }
	        if(s[i]== '?')
	        {
	            s[i]='0';
	            generate(i+1,s,ans);
	            s[i]='1';
	            generate(i+1,s,ans);
	        }
	        else
	        {
	        generate(i+1,s,ans);
	        }
	        
	    }
		vector<string> generate_binary_string(string s)
		{
		  vector<string>ans;
		  generate(0,s,ans);
		  return ans;// Code here
		}
};
