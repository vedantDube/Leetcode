class Solution {
public:
    string removeDuplicates(string s) {
       long long int i = 0;
       while(i<s.length()){
        long long int j = i+1;

        if(s[i]==s[j]){
            s.erase(i,2);
            i = 0;
        }
        else{
            i++;
        }
       }
       return s;
    }
};