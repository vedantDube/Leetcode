class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> mpp;
        vector<int> ans;
        int n = nums.size();
        int check = floor(n/3)+1;
        for(int i = 0;i<n;i++){
            mpp[nums[i]]++;
        }
        for(auto it : mpp){
            if(it.second>=check){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};