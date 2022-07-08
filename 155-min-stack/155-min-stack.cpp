class MinStack {
public:
    
    stack<int>st;
    multiset<int>mst;
    
    MinStack() {
        // st.clear();
        // mst.clear();
    }
    
    void push(int val) {
        st.push(val);
        mst.insert(val);
    }
    
    void pop() {
        int key=st.top();
        st.pop();
        mst.erase(mst.find(key));
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return *mst.begin();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */