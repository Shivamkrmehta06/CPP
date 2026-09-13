class MinStack {
public:
    stack<int> st;
    stack<int> stMin;
    MinStack() {
        
    }
    
    void push(int value) {
      if(st.empty()&&stMin.empty()){
        st.push(value);
        stMin.push(value);
      }else{
        stMin.push(min(value,stMin.top()));
        st.push(value);
      }
    }
    
    void pop() {
        if(!st.empty()&&!stMin.empty()){
            st.pop();
            stMin.pop();
        }
    }
    
    int top() {
        if(!st.empty()) return st.top();
        return -1;
    }
    
    int getMin() {
        if(!stMin.empty()) return stMin.top();
        return -1;
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */