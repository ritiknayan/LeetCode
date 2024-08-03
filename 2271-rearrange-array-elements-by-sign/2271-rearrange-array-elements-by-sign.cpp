class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {

        vector<int> positive;
        vector<int> negative;
        vector<int> ans;

        int n = nums.size();
        for(int i =0; i<n;i++){
            if(nums[i]>0){
                positive.push_back(nums[i]);
            }
        }
        for(int i =0; i<n;i++){
            if(nums[i]<0){
                negative.push_back(nums[i]);
            }
        }
          for(int j =0;j<positive.size();j++){
            ans.push_back(positive[j]);
             ans.push_back(negative[j]);
          }

          return ans;

        
    }
};