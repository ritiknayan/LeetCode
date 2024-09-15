class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {

        unordered_map<char,int> m;

        for(auto it : tasks){
            m[it]++;
        }
        int ans =  0;

        priority_queue<int> p;

        for(auto it : m){
            p.push(it.second);
        }
        while(!p.empty()){
            vector<int> temp;

            for(int i =0 ; i <= n; i++){
               if(!p.empty()){ temp.push_back(p.top());
                p.pop();}
            }

            for(int i = 0; i <temp.size(); i++){
                if(--temp[i] > 0){
                    p.push(temp[i]);
                }
            }
            ans += p.empty() ? temp.size() : n + 1;
        }
         return ans; 
    }
};