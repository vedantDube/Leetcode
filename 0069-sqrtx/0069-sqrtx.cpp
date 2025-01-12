class Solution {
public:

    long long int binary(int x){
        int s = 0;
        int e = x;
        long long int mid = s+(e-s)/2;
        long long int ans = -1;
        while(s<=e){
            long long int sqaure = mid*mid;
            if(sqaure == x){
                return mid;
            }
            if(sqaure<x){
                ans = mid;
                s = mid+1;
            }
            else{
                e = mid-1;
            }
            mid = s + (e-s)/2;
        }
            return ans;
    }
    int mySqrt(int x) {
        return binary(x);
    }
};