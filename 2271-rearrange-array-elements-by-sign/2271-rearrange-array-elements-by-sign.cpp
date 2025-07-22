class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> pos, neg;
  
        for (int num : nums) {
            if (num > 0)
                pos.push_back(num);
            else
                neg.push_back(num);
        }

    
       for(int i = 0;i<n/2;i++){
        nums[2*i] = pos[i];
        nums[2*i+1] = neg[i];
       }
        return nums;
    }
};
