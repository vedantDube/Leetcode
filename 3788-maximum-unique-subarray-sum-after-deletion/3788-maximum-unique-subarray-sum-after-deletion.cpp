class Solution {
public:
    int maxSum(vector<int>& nums) {
        unordered_map<int,int> mpp;
        for(int i = 0;i<nums.size();i++){
            if(nums[i]>=0){
            mpp[nums[i]]++;
            }
        }
        if(mpp.empty()){
            return *max_element(nums.begin(),nums.end());
        }
        int sum = 0;
        for(auto it: mpp){
            sum = sum + it.first;
        }
        return sum;
    }
};