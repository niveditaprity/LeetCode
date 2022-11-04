class Solution {
public:
   int parent[26],rank[26];
    int find(int x)
    {
        if(parent[x]==x)
        {
       return x;
        }
        parent[x] = find(parent[x]);
        return parent[x];
    }
    
    void connect(int x,int y)
    {
        x = find(x);
        y = find(y);
        
        if(x != y)
        {
         if(rank[x]<rank[y])
         {
             parent[x]=y;
         }
         else if(rank[y]<rank[x])
         {
           parent[y]=x;  
         }
        else
            {
            parent[x] = y;
            rank[y]++;
            }
        }
    }
    
    bool equationsPossible(vector<string>& equations) {
  
     for(int i=0;i<26;i++)
     {
         parent[i] = i;
         rank[i] = 0;
     }
        
     for(auto x: equations)
     {
         int xc = x[0] - 'a';
         int yc = x[3] - 'a';
         
         if(x[1] == '=')
         {
         connect(xc,yc);  
         }
     }
    for(auto x: equations)
     {
        int xc = x[0] - 'a';
        int yc = x[3] - 'a';
         if(x[1]=='!')
         {
          int findXparent = find(xc);
          int findYparent  = find(yc);
          if(findXparent == findYparent)
          {
           return false;   
          }
          
       }
     }
        
     return true;   
    }
};
