class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ans = 0;

        int n =  nums.size();
        map<int,int> mp;
        for(auto i: nums){
            mp[i]++;
        }
        for(auto i:mp){

            if(i.second > n/2){
              ans = i.first;
            }
        }

        return ans;
    }
};