class Solution {
public:
    bool isIsomorphic(string s, string t) {

        if(s.length() != t.length()) return false;

         char m1[256] = {0};
         char m2[256] = {0};

 

    

    for(int i = 0; i < s.length(); i++){
        if(m1[s[i]] != m2[t[i]]){
            return false;
        }
        m1[s[i]] = i + 1;
        m2[t[i]] = i + 1;
    }
    return true;
    
    }
};