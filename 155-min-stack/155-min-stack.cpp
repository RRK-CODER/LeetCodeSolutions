class MinStack {
    vector<int> s, minIdx;
public:
    void push(int val) {
        if(minIdx.empty() || val < s[minIdx.back()]) minIdx.push_back(s.size());
        s.push_back(val);
    }
    
    void pop() {
        s.pop_back();
        if(minIdx.back() == s.size()) minIdx.pop_back();
    }

    int top() { return s.back(); }
    int getMin() { return s[minIdx.back()]; }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */