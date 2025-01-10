class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        map<int, int> map;
        vector <int> ans;

        for(int data:nums){
            map[data]++;
        }
        for(const auto& pair:map){
            if(pair.second>1){
                ans.push_back(pair.first);
            }
        }
        return ans;
    }
};