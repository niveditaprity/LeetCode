class MyHashSet {
public:
    vector<bool>hash;
    MyHashSet() {
       hash.resize(1e6+1);
    }
    
    void add(int key) {
        hash[key]=true;
    }
    
    void remove(int key) {
       hash[key]=false; 
    }
    
    bool contains(int key) {
        return hash[key];
    }
};

/**
 * Your MyHashSet object will be instantiated and called as such:
 * MyHashSet* obj = new MyHashSet();
 * obj->add(key);
 * obj->remove(key);
 * bool param_3 = obj->contains(key);
 */
