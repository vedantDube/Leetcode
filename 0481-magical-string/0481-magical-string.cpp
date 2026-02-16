class Solution {
public:
    int magicalString(int n) {
        if(n <= 0) return 0;
        if(n <= 3) return 1; // "122"

        vector<int> s = {1,2,2};
        int i = 2;
        int nextNum = 1;
        int countOnes = 1;

        while(s.size() < n) {
            int repeat = s[i];

            for(int j = 0; j < repeat && s.size() < n; j++) {
                s.push_back(nextNum);
                if(nextNum == 1) countOnes++;
            }

            nextNum = (nextNum == 1) ? 2 : 1;
            i++;
        }

        return countOnes;
    }
};
