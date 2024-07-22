// class Solution {
// public:
//     int beautySum(string s) {
//         int sum =0;
//         for(int i =1;i<=s.length();i++){

//             string sub="";
//             sub = s.substr(0,i);
//             map<char,int> m;
//             for(int j=0;j<sub.length();j++){
//                 m[sub[j]]++;
//             }
//             if(m.size() ==1) continue;

//             for ( auto& pair : m) {
//              int  maxValue=0;
//               int  minValue=0;

//              if (pair.second > maxValue) {
//             maxValue = pair.second;
//              }
//              if (pair.second < minValue) {
//             minValue = pair.second;
//              }
//           sum = sum + maxValue-minValue;
//              }

//         }

//         return sum;
        
//     }
// };

class Solution {
public:
    int beautySum(string s) {
        int totalBeautySum = 0;

        // Iterate over all possible substrings
        for (int start = 0; start < s.length(); ++start) {
            map<char, int> freqMap;
            for (int end = start; end < s.length(); ++end) {
                freqMap[s[end]]++;

                int maxValue = INT_MIN;
                int minValue = INT_MAX;

                // Find max and min frequency
                for ( auto& pair : freqMap) {
                    if (pair.second > maxValue) {
                        maxValue = pair.second;
                    }
                    if (pair.second < minValue) {
                        minValue = pair.second;
                    }
                }

                // Add the beauty of this substring
                totalBeautySum += (maxValue - minValue);
            }
        }

        return totalBeautySum;
    }
};