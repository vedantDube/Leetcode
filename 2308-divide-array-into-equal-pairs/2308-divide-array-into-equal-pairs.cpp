class Solution {
public:
    bool divideArray(vector<int>& nums) {
        unordered_map<int, int> ans;
        for (int num : nums) {
        ans[num]++;
    }
        for(const auto& pair: ans){
            if(pair.second&1){
                return false;
            }
        }
        return true;

    }
};