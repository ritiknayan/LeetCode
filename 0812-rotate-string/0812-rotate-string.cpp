class Solution {
public:
    bool rotateString(string s, string goal) {
        int i=0;


        while(i<s.length()){
            if(s == goal) return true;

       else{
         char c = s[0];
            s.erase(s.begin());

            s.push_back(c);
            i++;
       }
        }

        return false;
        
    }
};