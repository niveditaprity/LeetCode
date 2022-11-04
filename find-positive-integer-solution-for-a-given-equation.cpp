/*
 * // This is the custom function interface.
 * // You should not implement it, or speculate about its implementation
 * class CustomFunction {
 * public:
 *     // Returns f(x, y) for any given positive integers x and y.
 *     // Note that f(x, y) is increasing with respect to both x and y.
 *     // i.e. f(x, y) < f(x + 1, y), f(x, y) < f(x, y + 1)
 *     int f(int x, int y);
 * };
 */

class Solution {
public:
    vector<vector<int>> findSolution(CustomFunction& customfunction, int z) {
        vector<vector<int>>v;
        for(int i=1;i<=z;i++)
        {
            for(int j=1;j<=z;j++)
            {
                int a=customfunction.f(i,j);
                if(a==z)
                {
                v.push_back({i,j});
                    }
            }
        }
       return v; 
    }
};
