class Solution {
public:
    int fib(int n) {
        int sum = 0;
        if(n>3){
        sum  = fib(n-2)+fib(n-1);
        return sum;
        }
        if(n==0){
            return 0;
        }
        if(n==3){
            return 2;
        }
        return 1;
    }
};