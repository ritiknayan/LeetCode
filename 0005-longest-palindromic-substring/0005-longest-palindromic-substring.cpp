class Solution {
public:
    string longestPalindrome(string s) {
    int n = s.length();
    int maxLen = 1;
    int start = 0;

    // find odd length palindromes by considering single mid element as center 
    for(int i=0; i<n-1; i++) {
        int l = i, r = i;
        while(l>=0 && r<n) {
            if(s[l]==s[r]) {
                l--;
                r++;
            } 
            else 
                break;
        } 
        int currLen = r - (l + 1);
        if(currLen > maxLen)//better case
        {
            maxLen = currLen;
            start = l + 1;
        }
    } 
    
    // find even length palindromes by considering two mid elements as center
    // all same like odd, just r = i+1
    for(int i=0; i<n-1; i++) {
        int l = i, r = i+1;
        while(l>=0 && r<n) {
            if(s[l]==s[r]) {
                l--;
                r++;
            } 
            else 
                break;
        } 
        int currLen = r - (l + 1);
        if(currLen > maxLen)//better case
        {
            maxLen = currLen;
            start = l + 1;
        }
    }  
    return s.substr(start,maxLen);
    }
};