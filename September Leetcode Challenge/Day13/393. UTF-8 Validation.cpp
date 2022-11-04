class Solution {
public:
    bool validUtf8(vector<int>& data) {
    int nextRBytes = 0;
    for( auto x: data)
    {
        if(nextRBytes == 0)
        {
        
            if(( x >> 5) == 0b110) // number of bytes 2
            {
                nextRBytes = 1;
            }
            else if((x >> 4) == 0b1110) //number of bytes 3
            {
                nextRBytes = 2;
            }
            else if((x >> 3) == 0b11110) // number of bytes 4
            {
                nextRBytes = 3;
            }
            else if ((x >> 7)!= 0b0)
            {
                 return false; 
            }
        }
        else
        {
            if(( x>>6 )!= 0b10)
            {
              return false; 
            }
           nextRBytes--; 
        }
    }
        if(nextRBytes == 0)
        {
        return true;
        }
       return false; 
    }
};
