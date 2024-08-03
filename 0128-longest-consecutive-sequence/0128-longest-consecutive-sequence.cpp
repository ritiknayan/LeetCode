class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.empty()) return 0;
        
        
        map<int, int> mpp;
        for (int num : nums) {
            mpp[num]++;
        }

        int longestStreak = 0;

        for (auto it = mpp.begin(); it != mpp.end(); ++it) {
            // Check if it's the start of a sequence
            if (mpp.find(it->first - 1) == mpp.end()) {
                int currentNum = it->first;
                int currentStreak = 1;

                // Check the length of the current sequence
                while (mpp.find(currentNum + 1) != mpp.end()) {
                    currentNum += 1;
                    currentStreak += 1;
                }

                // Update the longest streak found
                longestStreak = max(longestStreak, currentStreak);
            }
        }

        return longestStreak;
    }
};
