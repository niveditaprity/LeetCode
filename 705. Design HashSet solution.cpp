class MyHashSet {
public:
    vector<list<int>>v;
    int size=11;
    MyHashSet() {
       v.resize(size); 
    }
    int hash(int key)
    {
        int i=key%size;
        return i;
    }
    bool search(int key)
    {
        int i=hash(key);
        list<int>::iterator it = find(v[i].begin(),v[i].end(),key);
        if(it!=v[i].end())
        {
            return true;
        }
        return false;
        
    }
    
    void add(int key) {
        int i=hash(key);
        if(!search(key))
        {
            v[i].push_back(key);
        }
    }
    
    void remove(int key) {
       int i=hash(key);
        if(search(key))
        {
            v[i].remove(key);
        }
    }
    
    bool contains(int key) {
      return search(key);  
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
