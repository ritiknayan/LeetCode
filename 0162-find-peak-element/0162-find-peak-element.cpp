class Solution {
public:
    int findPeakElement(vector<int>& nums) {

    //     int s,e,mid;
    //     s=1,e=nums.size()-2;
    //     int n = nums.size();
    //     if(n==1) return 0;
    //     if(nums[0]> nums[1]) return 0;
    //     if(nums[n-1] > nums[n-2]) return n;

    //     while(s<=e){
    //         mid = s+(e-s)/2;

    //         if(nums[mid] > nums[mid+1] && nums[mid] > nums[mid-1]){
    //             return mid;
    //         }
    //         else if(nums[mid] > nums[mid-1]){
    //             s= mid+1;
    //         }
    //         else{
    //             e= mid-1;
    //         }
    //     }
    //    return -1; 
    int l=0,h=nums.size()-1;
        while(l<h) {
            int mid=l+(h-l)/2;
            if(nums[mid]<nums[mid+1])
                l=mid+1;
            else
                h=mid;
        }
        return l;
    }
};