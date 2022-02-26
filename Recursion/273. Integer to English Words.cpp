class Solution {
public:
    map<int,string>mp={
{1000000000, "Billion"}, {1000000,"Million"}, {1000, "Thousand"}, {100, "Hundred"}, 

{90, "Ninety"}, {80, "Eighty"}, {70, "Seventy"}, {60, "Sixty"}, {50, "Fifty"}, {40, "Forty"}, {30, "Thirty"}, {20, "Twenty"}, {10, "Ten"}, 
    
{19, "Nineteen"}, {18, "Eighteen"}, {17, "Seventeen"}, {16, "Sixteen"}, {15, "Fifteen"}, {14, "Fourteen"}, {13, "Thirteen"}, {12, "Twelve"}, {11, "Eleven"}, 
      
{9, "Nine"}, {8, "Eight"}, {7, "Seven"}, {6, "Six"}, {5, "Five"}, {4, "Four"}, {3, "Three"}, {2, "Two"}, {1, "One"}, {0, "Zero"}
};
    string numberToWords(int num) {
        
        if(num<=20)
        {
          return mp[num];
        }
        
        auto it = mp.upper_bound(num);
        it--;
        string pre="",suf="";
        if(it->first>=100)
        {
          pre = numberToWords(num/it->first)+" ";  
        }
        if(num%it->first!=0)
        {
            suf=" "+numberToWords(num%it->first);
        }
        return pre+it->second+suf;
    }
};
