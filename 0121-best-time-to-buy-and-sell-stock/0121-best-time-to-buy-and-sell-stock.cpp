class Solution {
public:
    int maxProfit(vector<int>& prices) {

      
        int ans = 0;
        int n = prices.size()-1;

        int maxi = INT_MIN;


        for(int i =n;i>=0;i--){

            maxi = max(maxi, prices[i]);

            ans = max(ans, maxi - prices[i]);
            
            
           
        }

         return ans;
        
    }
};