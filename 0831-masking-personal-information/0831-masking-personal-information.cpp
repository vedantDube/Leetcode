class Solution {
public:
    string maskPII(string s) {

  
        if(s.find('@') != string::npos) {
 
            for(char &c : s) c = tolower(c);

            int at = s.find('@');

            string name = s.substr(0, at);
            string domain = s.substr(at);

            string result = "";
            result += name[0];
            result += "*****";
            result += name.back();
            result += domain;

            return result;
        }

       
        else {
            string digits = "";

           
            for(char c : s) {
                if(isdigit(c))
                    digits += c;
            }

            int n = digits.size();
            string last4 = digits.substr(n - 4);

            string result = "";

            int country = n - 10;

            if(country > 0) {
                result += "+";
                result += string(country, '*');
                result += "-";
            }

            result += "***-***-" + last4;

            return result;
        }
    }
};
