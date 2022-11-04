class Solution {
public:
    int countMatches(vector<vector<string>>& items, string ruleKey, string ruleValue) {

        int count=0;
        for(int i=0;i<items.size();i++)
        {
            if(items[i][0]==ruleValue && ruleKey=="type")
            {
                count++;
            }
            if(items[i][1]==ruleValue && ruleKey=="color")
            {
                count++;
            }
            if(items[i][2]==ruleValue && ruleKey=="name")
            {
                count++;
            }
        }
        
        return count;
        
    }
};
