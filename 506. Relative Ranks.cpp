class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        priority_queue< pair<int,int> >pq;
        for(int i=0;i<score.size();i++)
        {
            pq.push({score[i],i});
        }
        vector<string>st(score.size());
        int i=1;
        while(!pq.empty())
        {
            if(i==1)
            {
              st[pq.top().second]="Gold Medal";  
                pq.pop();
            }
            else if(i==2)
            {
                st[pq.top().second]="Silver Medal";
                pq.pop();
                
            }
            else if(i==3)
            {
                st[pq.top().second]="Bronze Medal";
                pq.pop();
            }
            else
            {
                st[pq.top().second]=to_string(i);
                pq.pop();
            }
            i++;
        }
        return st;
        
       
        
    
    }
};
