class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int size = grid.size();
        int a, b;
        unordered_map<int, int> freq;
        for (auto& row : grid) {
            for (int num : row) {

                freq[num]++;
            }
        }

        for (int i = 1; i <= size * size; i++) {
            if (freq.count(i) < 1) {
                a = i;
            } else if (freq[i] == 2) {
                b = i;
            }
        }
        return {b, a};
    }
};