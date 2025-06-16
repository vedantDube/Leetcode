class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int ans = nums[0];
        int diff = 0;
        for(int num: nums){
            if(num<ans){
                ans = num;
            }else if(num-ans>diff){
                diff = num -ans;
            }
        }
        if(diff==0){
            return -1;
        }else{
            return diff;
        }
    }
};