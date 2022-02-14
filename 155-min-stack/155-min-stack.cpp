class MinStack {
public:
    stack<int> st;
    stack<int> minS;
   
    MinStack() {
        
    }
    
    void push(int val) {
        st.push(val);
        if(minS.empty()||val<=minS.top()){
            minS.push(val);
        }
    }
    
    void pop() {
        if(!st.empty()){
            int s=st.top();
            st.pop();
            if(s==minS.top()){
                minS.pop();
            }
        }
    }
    
    int top() {
        if(!st.empty()){
            return st.top();
        }
       return 0;
    }
    
    int getMin() {
       if(!minS.empty()){
           return minS.top();
       }
        return 0;
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