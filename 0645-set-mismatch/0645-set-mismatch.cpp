class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        unordered_map<int, int> freq;
        for(int x : nums) {
            freq[x]++;
        }

        int duplicate = -1, missing = -1;
        int n = nums.size();
        for(int i = 1; i <= n; i++) {
            if(freq[i] == 0) missing = i;
            if(freq[i] == 2) duplicate = i;
        }

        return {duplicate, missing};
    }
};
