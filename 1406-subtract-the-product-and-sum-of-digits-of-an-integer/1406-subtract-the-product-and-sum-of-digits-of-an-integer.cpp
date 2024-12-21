class Solution {
public:
    int subtractProductAndSum(int n) {
        int multiply=1;
        int sum = 0;

        while(n>0){
            int a = n%10;
            multiply = multiply*a;
            sum = sum +a;
            n = n/10;
        }
        int ans = multiply - sum;
        return ans;
    }
};