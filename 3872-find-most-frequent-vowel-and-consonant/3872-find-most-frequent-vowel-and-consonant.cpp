class Solution {
public:

    bool isVowel(char c){
        if(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'){
            return true;
        }
        return false;
    }

    int maxFreqSum(string s) {
        unordered_map<char,int> mp;
        for(int i : s){
            mp[i]++;
        }
        int v = 0;
        int con = 0;
        for(auto it:mp){
            if(isVowel(it.first)){
                v = max(v,it.second);
            }
            else{
                con = max(con,it.second);
            }
        }
        return con + v;
    }
};