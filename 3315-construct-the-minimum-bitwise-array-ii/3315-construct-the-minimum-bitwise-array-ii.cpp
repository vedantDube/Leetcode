class Solution {
public:
    vector<int> minBitwiseArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n, -1);

        for(int i = 0; i < n; i++) {
            int x = nums[i];

            if (x == 2) {
                res[i] = -1;
                continue;
            }

            int t = 0;
            int temp = x;

            while ((temp & 1) == 1) {
                t++;
                temp >>= 1;
            }

            res[i] = x - (1 << (t - 1));
        }

        return res;
    }
};