class StockSpanner {
public:
stack<pair<int,int>> s;
  
    StockSpanner() {
       
        
    }
   
    
    int next(int price) {

       if(s.size() == 0){
        s.push({price,1});
        return 1;
       }
       int count = 1;

       while(!s.empty() && s.top().first <= price){
           count = count + s.top().second;
           s.pop();
       }
       s.push({price,count});
       return count;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */