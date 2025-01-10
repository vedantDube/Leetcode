class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int size = arr.size()-1;
        int ans = 0;
        for(int i = 0;i<size;i++){
                if(arr[i]>arr[i+1] && arr[i-1]<arr[i]){
                    ans = i;
                }
        }
        return ans;
    }
};