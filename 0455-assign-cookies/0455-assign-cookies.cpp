class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int sizeG = g.size();
        int sizeS = s.size();
        if(sizeG == 0 || sizeS == 0){
            return 0;
        }
        int left = 0;
        int right = 0;
        int count = 0;
        while(left<sizeS && right < sizeG){
            if(g[right]<=s[left]){
                count++;
                right++;
            }
            left++;
        }        
        return count;

    }

};