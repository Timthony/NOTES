class MinStack {
public:
    /** initialize your data structure here. */
    // 考虑用两个栈实现，一个栈来存放元素，一个栈来存放最小值 
    stack<int> s1;
    stack<int> s2;
    MinStack() {
        
    }
    
    void push(int x) {
        s1.push(x);
        if(s2.empty() || x <= getMin())
        {
            s2.push(x);
        }
    }
    
    void pop() {
        if(s1.top() == getMin())
        {
            s2.pop();
        }
        s1.pop();
    }
    
    int top() {
        return s1.top();
    }
    
    int getMin() {
        return s2.top();
    }

    
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack obj = new MinStack();
 * obj.push(x);
 * obj.pop();
 * int param_3 = obj.top();
 * int param_4 = obj.getMin();
 */
