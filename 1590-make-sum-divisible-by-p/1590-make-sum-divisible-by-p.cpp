class Solution {
public:
    int minSubarray(vector<int>& nums, int p) {
        long long totalSum = 0;
        int n = nums.size();

 
        for(int x : nums) totalSum += x;

        int target = totalSum % p;

 
        if(target == 0) return 0;

        unordered_map<int, int> mp;
        mp[0] = -1;   

        long long prefix = 0;
        int minLen = n;

        
        for(int i = 0; i < n; i++) {
            prefix = (prefix + nums[i]) % p;

            int need = (prefix - target + p) % p;

            if(mp.find(need) != mp.end()) {
                minLen = min(minLen, i - mp[need]);
            }

            mp[prefix] = i;
        }

        
        return (minLen == n) ? -1 : minLen;
    }
};
