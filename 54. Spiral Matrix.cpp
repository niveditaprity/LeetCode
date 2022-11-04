class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>v;
        int m=matrix.size();
        int n=matrix[0].size();
        int rowf=0,rowl=m-1,colf=0,coll=n-1;
        while(rowf<=rowl&&colf<=coll)
        {
            if(rowf<=rowl&colf<=coll)
            {
                for(int i=colf;i<=coll;i++)
                {
                    v.push_back(matrix[rowf][i]);
                }
            }
            rowf++;
            if(rowf<=rowl&colf<=coll)
            {
                for(int i=rowf;i<=rowl;i++)
                {
                    v.push_back(matrix[i][coll]);
                }
            }
            coll--;
            if(rowf<=rowl&colf<=coll)
            {
                for(int i=coll;i>=colf;i--)
                {
                    v.push_back(matrix[rowl][i]);
                }
            }
            rowl--;
            if(rowf<=rowl & colf<=coll)
            {
                for(int i=rowl;i>=rowf;i--)
                {
                    v.push_back(matrix[i][colf]);
                }
            }
            colf++;
            
            
        }
        return v; 
    }
};
