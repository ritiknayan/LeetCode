#include <iostream>
#include <queue>
#include <map>
#include <vector>

using namespace std;

class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        if (hand.size() % groupSize != 0) return false;

       
        map<int, int> count;
        for (int card : hand) {
            count[card]++;
        }

        
        for (auto it = count.begin(); it != count.end(); ++it) {
            if (it->second > 0) { 
                int freq = it->second;
                int startCard = it->first;

               
                for (int i = 0; i < groupSize; i++) {
                    int card = startCard + i;
                    if (count[card] < freq) {
                        return false; 
                    }
                    count[card] -= freq; 
                }
            }
        }

        return true;
    }
};
