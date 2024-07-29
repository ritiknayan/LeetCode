class Solution {
public:
    

    void solve(vector<vector<int>>& ans,vector<int> output, vector<int> nums, int index){


        // base case
        if(index >= nums.size()){

            ans.push_back(output);
            return;
        }

        //exclude 
        solve(ans,output,nums,index+1);


        //include
        int element = nums[index];
        output.push_back(element);
        solve(ans,output,nums,index+1);
    }


    vector<vector<int>> subsets(vector<int>& nums) {

        vector<vector<int>> ans;
        vector<int> output;
        int index =0;
        solve(ans,output,nums,index);

        return ans;

        
        
    }
};