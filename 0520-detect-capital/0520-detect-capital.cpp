class Solution {
public:
    bool detectCapitalUse(string word) {
        int capCount = 0;

        
        for(char c : word) {
            if(c >= 'A' && c <= 'Z')
                capCount++;
        }

        int n = word.size();

    
        if(capCount == n) return true;             
        if(capCount == 0) return true;              
        if(capCount == 1 && word[0] >= 'A' && word[0] <= 'Z') return true;

        return false;
    }
};