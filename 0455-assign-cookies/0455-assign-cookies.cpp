class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {

        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        int ans = 0;
        int r = 0, l = 0; 

        while (r < s.size() && l < g.size()) {
            if (s[r] >= g[l]) {
                ans++;
                l++;
            }
            r++;  
        }
        
        return ans;
    }
};
