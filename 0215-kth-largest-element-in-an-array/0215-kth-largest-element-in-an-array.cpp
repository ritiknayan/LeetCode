class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {

        priority_queue<int> p;

        for(int i = 0; i< nums.size(); i++){
            p.push(nums[i]);
        }

        int n = k - 1;

        while(n > 0){
            p.pop();
            n--;
        }
        int ans = p.top();

        return ans;


        
    }
};