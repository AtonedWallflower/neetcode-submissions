class MinStack {
public:
    stack<long long> st;
    long long mini=LLONG_MAX;
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
    }
    
    void pop() {
        if(!st.empty()) st.pop();
    }
    
    int top() {
        if(!st.empty()) return st.top();
    }
    
    int getMin() {
        stack<long long> copy=st;
        mini=LLONG_MAX;
        while(!copy.empty()){
            mini=min(copy.top(),mini);
            copy.pop();
        }
        return mini;
    }
};
