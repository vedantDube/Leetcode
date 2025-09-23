class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int maxLength = 0;
        unordered_set<char> st;
        int left = 0;

        for(int i = 0;i<n;i++){
            if(st.count(s[i])==0){
                st.insert(s[i]);
                maxLength = max(maxLength,i-left+1);
            }
            else{
                while(st.count(s[i])){
                    st.erase(s[left]);
                    left++;
                }
                st.insert(s[i]);
            }
        }
        return maxLength;
    }
};