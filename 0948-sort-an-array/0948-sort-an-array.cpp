class Solution {
public:
    void merge(vector<int>& nums, int i, int mid, int j) {
        vector<int> temp;
        int left = i;
        int right = mid + 1;

        while (left <= mid && right <= j) {
            if (nums[left] <= nums[right]) {
                temp.push_back(nums[left]);
                left++;
            } else {
                temp.push_back(nums[right]);
                right++;
            }
        }
        while (left <= mid) {
            temp.push_back(nums[left]);
            left++;
        }
        while (right <= j) {
            temp.push_back(nums[right]);
            right++;
        }
        
        for (int k = 0; k < temp.size(); k++) {
            nums[i + k] = temp[k];  // Use correct offset to copy back to nums
        }
    }

    void mergesort(vector<int>& nums, int i, int j) {
        if (i >= j) return;
        int mid = (i + j) / 2;

        mergesort(nums, i, mid);
        mergesort(nums, mid + 1, j);

        merge(nums, i, mid, j);
    }

    vector<int> sortArray(vector<int>& nums) {
        int i = 0;
        int j = nums.size() - 1;

        mergesort(nums, i, j);
        return nums;
    }
};
