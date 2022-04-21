class MyHashMap {
public:
    
    vector<pair<int,int>>v;
    
    
    
    MyHashMap() {
        
    }
    
    void put(int key, int value) {
        
        for(int i=0;i<v.size();i++)
        {
            if(v[i].first == key)
            {
               v[i].second = value;
                return;
            }
        }
        v.push_back({key,value});
        
    }
    
    int get(int key) {
        
        for(int i=0;i<v.size();i++)
        {
            if(v[i].first == key)
            {
                return v[i].second;
            }
        }
        return -1;
        
    }
    
    void remove(int key) {
        int j=INT_MAX;
        for(int i=0;i<v.size();i++)
        {
            if(v[i].first == key)
            {
                j = i;
                break;
            }
        }
        if(j==INT_MAX)
        {
            return;
        }
        v.erase(v.begin()+j);
        
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */