class Solution {
public:
    int countsubarray(vector<int>& nums, int k){
        int r=0,l=0;
        int count = 0;

        int sum =0;
        while(r<nums.size()){
            sum+= nums[r] % 2;

            while(sum > k){
                sum-= nums[l] % 2;
                l++;
            }
            count+= r-l+1;
            r++;
        }
        return count;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {

        

        return countsubarray(nums,k) - countsubarray(nums,k-1);

        
    }
};