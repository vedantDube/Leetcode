class Solution {
public:
    int maximumCount(vector<int>& nums) {
        int positive =0;
        int negative = 0;

            for(int num:nums){
                if(num>0){
                    positive++;
                }
                if(num<0){
                    negative++;
                }
            }
            return max(positive,negative);
    }
};