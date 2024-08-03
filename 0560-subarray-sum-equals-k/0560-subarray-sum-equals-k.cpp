class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> sumMap;
        int sum = 0;
        int count = 0;

        // Initialize sumMap with 0 sum having one count
        sumMap[0] = 1;

        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];

            // Check if there is a prefix sum that equals to (sum - k)
            if (sumMap.find(sum - k) != sumMap.end()) {
                count += sumMap[sum - k];
            }

            // Update the sumMap with the current sum
            sumMap[sum]++;
        }

        return count;
    }
};
