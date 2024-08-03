class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_set<int> s;
        for(auto it : nums){
            s.insert(it);
        }
        if(nums.size() == 0)  return 0;

        int longest = 1;
        for(auto it: s){

            if(s.find(it - 1) == s.end()){

                int x = it;
                int count =1;

                while(s.find(x+1) != s.end()){
                    x= x+1;
                    count = count +1;
                }
              longest= max(longest,count);

            }



        }
        return longest;
    }
};