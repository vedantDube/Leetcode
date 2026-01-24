class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n = nums.size();
        vector<bool> seen(n + 1, false);
        vector<int> result;
        
        for(int num : nums) {
            
                seen[num] = true;
            
        }
        
        for(int i = 1; i <= n; i++) {
            if(!seen[i]) {
                result.push_back(i);
            }
        }
        
        return result;
    }
};