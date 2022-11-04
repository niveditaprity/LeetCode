#include <bits/stdc++.h>
using namespace std;
void solve(string i,string o)
{
    if(i.size()==0)
    {
        cout<<o<<" ";
        return;
    }
    
    solve(i.substr(1,i.size()),o+i[0]);
    solve(i.substr(1,i.size()),o);
    
    
    
}


int main() {
	string s="abc";
	string op="";
	solve(s,op);
	return 0;
}
