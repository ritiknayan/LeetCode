class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        //better solution
       int right=0,left=0,maxlen=0;
       int zeroes =0;

       while(right < nums.size()){

         if(nums[right] == 0){
               zeroes++;
            }
         if(zeroes > k){
        if(nums[left] == 0){
            zeroes--;
        }
        left++;
         }

        if(zeroes <= k){
             int len= right-left+1;
         maxlen= max(maxlen,len);
        }
        right++;

       }

       return maxlen;
    }
};