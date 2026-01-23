class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        int n = nums.size();
        vector<int> num(n,0);
        for(int i = 0;i<nums.size();i++){
            for(int j = 0;j<nums.size();j++){
                if(i!=j && nums[j]<nums[i]){
                    num[i]++;
                }
            }
        }
        return num;
    }
};