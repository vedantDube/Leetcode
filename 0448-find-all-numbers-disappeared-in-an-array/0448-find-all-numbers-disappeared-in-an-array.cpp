class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        unordered_map<int, int> mpp;

        for (int i = 1; i <= n; i++) {
            mpp[i] = 0;
        }

        for (int i = 0; i < n; i++) {
            mpp[nums[i]]++;
        }

            for (auto i : mpp) {
                if (i.second == 0) {
                    ans.push_back(i.first);
                }
            }
        return ans;
    }
};