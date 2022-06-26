class MyHashMap {
public:
    int hsh[1000009];
    
    MyHashMap() {
        memset(hsh,-1,sizeof(hsh));
    }
    
    void put(int key, int value) {
        hsh[key]=value;
    }
    
    int get(int key) {
        return hsh[key];
    }
    
    void remove(int key) {
        hsh[key]=-1;
    }
};

/**
 * Your MyHashMap object will be instantiated and called as such:
 * MyHashMap* obj = new MyHashMap();
 * obj->put(key,value);
 * int param_2 = obj->get(key);
 * obj->remove(key);
 */