// class Solution {
// public:

//    static bool comp(pair<char,int>&a,pair<char,int>&b){
//     return a.second > b.second;
//    }


//     string frequencySort(string s) {

//         unordered_map<char,int> mpp;

//         for(int i =0;i<s.length();i++){
//             mpp[s[i]]++;

//         } 
//         vector<pair<char,int>> vec;

//         for(auto x: mpp){
//             vec.push_back({x.first,x.second});

//         }

//         sort(vec.begin(),vec.end(),comp);
//         string ans="";

//         for(auto x: vec){
//             for(int i=0;i<x.second;i++){
//                 ans=ans+x.first;
//             }
//         }

//           return ans;
//     }
// };

class Solution {
public:
    string frequencySort(string s) {
        string ans="";
        unordered_map<char,int>m;

        for(auto i:s){
            m[i]++;
        }
        priority_queue<pair<int,char>>p;
         for(auto i:m){
             p.push({i.second,i.first});
         }
         while(!p.empty()){
             int n=p.top().first;
             while(n--){
                 ans+=p.top().second;
             }
             p.pop();
         }
         return ans;
    }
};