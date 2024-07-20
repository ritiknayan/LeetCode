// class Solution {
// public:
//     string removeOuterParentheses(string s) {

//     //     string ans="";
         
//     //   bool flag = true;
//     //   int count=0;
//     //   for(int i =0;i<s.length();i++){
//     //     if(s[i] == '(') count++;
//     //     else if(s[i] == ')') count--;


//     //     if(count == 1 && flag == true){
//     //         flag = false;
//     //         continue;
//     //     }
//     //     if(count == 0 && flag == false){
//     //         flag = true;
//     //         continue;
//     //     }
//     //  ans=ans+s[i];

//     //   }

//     //   return ans;

    

//     }
// };

class Solution {
public:
    // Function to remove outermost parentheses of every primitive string in the
    // decomposition of s
    string removeOuterParentheses(string s) {
        string result;   // To store the final result
        int balance = 0; // To keep track of the balance of parentheses

        // Iterate through each character in the string
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                // If balance is greater than 0, it means this '(' is not an
                // outermost parenthesis
                if (balance > 0) {
                    result += s[i]; // Add the character to the result
                }
                balance++; // Increase the balance for '('
            } else {
                balance--; // Decrease the balance for ')'
                // If balance is greater than 0, it means this ')' is not an
                // outermost parenthesis
                if (balance > 0) {
                    result += s[i]; // Add the character to the result
                }
            }
        }

        return result; // Return the final result after removing outermost
                       // parentheses
    }
};