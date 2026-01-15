class Solution {
public:
    int countGoodSubstrings(string s) {
        int i = 0;
        int j = 0;
        int n = s.size();
        int counter = 0;
        while (j < n) {
            if (j - i + 1 < 3) {
                j++;
            } else if (j - i + 1 == 3) {
                if (s[i] != s[i + 1] && s[i + 1] != s[j] && s[i] != s[j]) {
                    counter++;
                }
                i++;
                j++;
            }
        }
        return counter;
    }
};