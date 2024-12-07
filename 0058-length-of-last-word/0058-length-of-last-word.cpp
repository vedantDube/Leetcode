class Solution {
public:
    int lengthOfLastWord(string s) {
        bool canCount = false;
        int word_length = 0;
        for(int i = s.length()-1;i>=0;i--){
            if(s[i]==' ' && canCount == false) continue;
            else if(s[i] != ' '){
                canCount = true;
                word_length ++;
            }else if(s[i]==' ' && canCount == true){
                return word_length;
            }
        }
        return word_length;
    }
};