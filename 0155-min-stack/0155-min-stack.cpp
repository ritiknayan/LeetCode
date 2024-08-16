class MinStack {
    stack<long long> s;
    long long mini = 1e9;
public:
    MinStack() {
        
    }
    
    void push(long long val) {

        if(s.empty()){
            s.push(val);
            mini = val;
        }else{
            if(val > mini){
                s.push(val);
            }
            else{
                long long r = 2*val - mini;
                s.push(r);
                mini = val;
            }
        }
        
    }
    
    void pop() {
        if(s.empty()) return;
        long long x = s.top();
        s.pop();
        if(x < mini){
            mini = 2*mini - x;
        }  
    }
    
    long long top() {
          if(s.empty()) return -1;
       long long a = s.top();

       if(mini < a){
        return a;
       }
       
          return mini;
    }
    
    long long getMin() {
       return mini; 
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