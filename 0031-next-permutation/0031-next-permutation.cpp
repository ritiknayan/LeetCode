class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size() - 1;
        int index = -1;

        // Find the first index from the end where nums[i] < nums[i + 1]
        for (int i = n - 1; i >= 0; i--) {
            if (nums[i] < nums[i + 1]) {
                index = i;
                break;
            }
        }

        if (index == -1) {
            // If no such index is found, reverse the entire array
            reverse(nums.begin(), nums.end());
            return;
        }

        // Find the smallest number greater than nums[index] to the right of index
        for (int i = n; i > index; i--) {
            if (nums[i] > nums[index]) {
                swap(nums[i], nums[index]);
                break;
            }
        }

        // Reverse the part of the array to the right of index
        reverse(nums.begin() + index + 1, nums.end());
    }
};
