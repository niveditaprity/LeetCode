class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
       int l=0,r=matrix[0].size()-1,top=0,down=matrix.size()-1;
        
        vector<int>ans;
        while(l <= r && top <= down)
        {
         if(l<=r && top<=down)
         {
             for(int i=l;i<=r;i++)
             {
                 ans.push_back(matrix[top][i]);
             }
         }
        top++;
         if(l<=r && top<=down)
         {
             for(int i=top;i<=down;i++)
             {
                 ans.push_back(matrix[i][r]);
             }
         }
         r--;
         if(l<=r && top <= down)
         {
             for(int i = r ;i>=l ;i--)
             {
                 ans.push_back(matrix[down][i]);
             }
         }
        down--;
         if(l<=r && top<=down )
         {
             for(int i=down;i>=top;i--)
             {
                 ans.push_back(matrix[i][l]);
             }
         }
         l++;
        }
        return ans;
    }
};
