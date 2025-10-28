#include <string>
#include <algorithm>

class Solution {
public:
    int lengthOfLongestSubstring(std::string s) {
        if(s.empty()) return 0;
        if(s.size() == 1) return 1;
        
        int ans = INT_MIN;
        std::string tmp = "";
        
        for(auto x : s) {
            if(std::find(tmp.begin(), tmp.end(), x) != tmp.end()) {
                tmp = tmp.substr(tmp.find(x) + 1);
            }
            tmp += x;
            ans = std::max(ans, static_cast<int>(tmp.length()));
        }
        
        return ans;
    }
};