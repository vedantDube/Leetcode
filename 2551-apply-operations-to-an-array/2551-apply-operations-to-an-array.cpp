class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int size = nums.size();
        vector<int> ans;

                for (int i = 0; i < size-1; i++) {
            if (nums[i] == nums[i + 1] ) {
                nums[i] *= 2;
                nums[i + 1] = 0;
            }
        }

        
        for (int num : nums) {
            if (num != 0) {
                ans.push_back(num);
            }
        }

       
        while (ans.size() < size) {
            ans.push_back(0);
        }

        return ans;
    }
};