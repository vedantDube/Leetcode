class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        string clean = "";

        
        for(char c : s) {
            if(c != '-') {
                clean += toupper(c);
            }
        }

        string result = "";
        int count = 0;

        
        for(int i = clean.size() - 1; i >= 0; i--) {
            result += clean[i];
            count++;

            if(count == k) {
                result += '-';
                count = 0;
            }
        }

        
        reverse(result.begin(), result.end());

        
        if(!result.empty() && result[0] == '-')
            result.erase(0, 1);

        return result;
    }
};
