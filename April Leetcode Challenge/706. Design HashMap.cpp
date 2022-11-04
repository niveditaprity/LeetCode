class MyHashMap {
public:
    vector<list<pair<int,int>>>mp;
    int size=10;
    MyHashMap() {
       mp.resize(size); 
    }
    int hash(int key)
    {
        return key%size;
    }
    void put(int key, int value) {
       int i=hash(key);
        for(auto it=mp[i].begin();it!=mp[i].end();it++)
        {
            if(it->first==key)
            {
                it->second=value;
                return;
            }
        }
        mp[i].push_back({key,value});
    }
    
    int get(int key) {
       
        int i=hash(key);
        for(auto it=mp[i].begin();it!=mp[i].end();it++)
        {
            if(it->first==key)
            {
                return it->second;
            
            }
        }
        return -1;
    }
    
    void remove(int key) {
      
        int i=hash(key);
        for(auto it=mp[i].begin();it!=mp[i].end();it++)
        {
            if(it->first==key)
            {
               mp[i].erase(it);
                return;
            }
        }
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */
