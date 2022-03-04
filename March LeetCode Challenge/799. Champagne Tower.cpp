

class Solution {
public:
    double champagneTower(int poured, int query_row, int query_glass) {
      
       if(poured==0)
       {
           return 0;
       }
        vector<double>list;
        list.push_back((double)poured);
        for(int i=1;i<=query_row;i++)
        {
            
            vector<double>temp;
            temp.push_back(max((list[0]-1)/2,0.0));
            for(int j=1;j<list.size();j++)
            {
                temp.push_back(max((list[j]-1)/2,0.0) + max((list[j-1]-1)/2,0.0));
            }
            temp.push_back(temp[0]);
            list=temp;
        }
        return min(1.0,list[query_glass]);
     
    }
};        

 
