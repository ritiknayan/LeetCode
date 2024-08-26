class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> s;

        for(int asteroid : asteroids) {
            bool destroyed = false;
            while(!s.empty() && asteroid < 0 && s.top() > 0) {
                if(s.top() < -asteroid) {
                    s.pop(); // Pop the smaller positive asteroid
                    continue; // Continue to handle the collision with the next asteroid in the stack
                } else if(s.top() == -asteroid) {
                    s.pop(); // Both asteroids destroy each other
                    destroyed = true;
                    break;
                } else {
                    destroyed = true; // The current negative asteroid is destroyed
                    break;
                }
            }

            if(!destroyed) {
                s.push(asteroid); // Push the current asteroid if it survived or no collision occurred
            }
        }

        vector<int> ans;
        while(!s.empty()) {
            ans.push_back(s.top());
            s.pop();
        }

        reverse(ans.begin(), ans.end());
        return ans;
    }
};
