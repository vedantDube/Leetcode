class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();
         vector<int> ans;
        for (int i = 0; i < n; i++) {
            ans.push_back(nums1[i]);
        }
        for (int i = 0; i < m; i++) {
            ans.push_back(nums2[i]);
        }
        sort(ans.begin(), ans.end());
        int total = ans.size();

        if (total % 2 == 1) {
            return ans[total / 2];
        } else {
            return (static_cast<double>(ans[total/2]) + static_cast<double>(ans[total/2-1])) / 2.0;
        }
    }
};