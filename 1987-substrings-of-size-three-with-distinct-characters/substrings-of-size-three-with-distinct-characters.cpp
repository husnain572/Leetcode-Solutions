class Solution {
public:
    int countGoodSubstrings(string s) {
        int n = s.size();
        int count = 0;
        int i = 0;

        for (int j = 0; j < n; j++) {
            if (j - i + 1 == 3) {
                if (s[i] != s[i + 1] &&
                    s[i] != s[i + 2] &&
                    s[i + 1] != s[i + 2]) {
                    count++;
                }
                i++; 
            }
        }
        return count;
    }
};
