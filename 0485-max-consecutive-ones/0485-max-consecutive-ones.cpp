class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int max1 = INT_MIN;
        int size = nums.size();
       
        for(int i = 0;i<size;i++){
            if(nums[i]==1){
                count++;

                max1 = max(count,max1);
            }
            else{
                count = 0;
            }
        }
        if(max1==INT_MIN){
            return 0;
        }
        return max1;
    }
};