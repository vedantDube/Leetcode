class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        long long sum = 0;
        int neg = 0;
        int mini = INT_MAX;

        for(auto& row : matrix){
            for(int v : row){
                if(v<0) neg++;
                int a = abs(v);
                sum = sum +a;
                mini = min(mini,a);
            }
        }
        return (neg%2==0) ? sum : sum - 2LL*mini;
    }
};