class Solution {

private:
    void solve(string digit, string mapping[], int index, vector<string>& ans,
               string output) {

        if (index >= digit.length()) {
            ans.push_back(output);
            return;
        }

        int number = digit[index] - '0';
        string value = mapping[number];

        for (int i = 0; i < value.length(); i++) {
            output.push_back(value[i]);
            solve(digit, mapping, index + 1, ans, output);
            output.pop_back();
        }
    }

public:
    vector<string> letterCombinations(string digits) {
        vector<string> ans;
        if (digits.length() == 0) {
            return ans;
        }

        string output = "";
        int index = 0;

        string mapping[10] = {"","","abc",  "def", "ghi", "jkl",
                              "mno", "pqrs", "tuv", "wxyz"};
        solve(digits, mapping, index, ans, output);
        return ans;
    }
};