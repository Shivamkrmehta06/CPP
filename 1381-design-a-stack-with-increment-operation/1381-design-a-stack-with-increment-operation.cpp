class CustomStack {
public:
    stack<int> s;
    stack<int> s1;
    stack<int> temp;
    int maxSize;
    CustomStack(int maxSize) {
        this->maxSize=maxSize;
    }
    
    void push(int x) {
        if(s.size()<maxSize) s.push(x);
    }
    
    int pop() {
        if(!s.empty()){
            int x=s.top();
            s.pop();
            return x;
        }
        return -1;
    }
    
    void increment(int k, int val) {
        int n=max(0,(int)s.size()-k);
        while(n!=0){
            int x = s.top();
            temp.push(x);
            s.pop();
            n--;
        }
        while(!s.empty()){
            int x=s.top();
            s.pop();
            s1.push(x);
        }
        while(!s1.empty()){
            int x=s1.top()+val;
            s.push(x);
            s1.pop();
        }
        while(!temp.empty()){
            int x=temp.top();
            s.push(x);
            temp.pop();
        }
    }
};

/**
 * Your CustomStack object will be instantiated and called as such:
 * CustomStack* obj = new CustomStack(maxSize);
 * obj->push(x);
 * int param_2 = obj->pop();
 * obj->increment(k,val);
 */