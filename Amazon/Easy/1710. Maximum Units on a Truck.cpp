class Solution {
public:
    static bool sortcol( const vector<int>& v1,const vector<int>& v2 ) 
    {
        return v1[1] > v2[1];
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
     sort(boxTypes.begin(),boxTypes.end(),sortcol);
    
     int boxno=0;
        int total=0;
     
       for(int i=0;i<boxTypes.size();i++)
       {
          boxno+=boxTypes[i][0];
           if(boxno>truckSize)
           {
               boxno=boxno-boxTypes[i][0];
               total+=(truckSize-boxno)*boxTypes[i][1];
               break;
           }
           else{
               total+=(boxTypes[i][0])*boxTypes[i][1];
           }
       }
        
      return total;  
           
    }
};
