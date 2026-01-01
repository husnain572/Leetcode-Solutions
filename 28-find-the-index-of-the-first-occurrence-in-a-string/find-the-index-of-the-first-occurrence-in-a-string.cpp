class Solution {
public:
    int strStr(string haystack, string needle) {
      int N = needle.length();
        int H = haystack.length();

        for (int i = 0; i <= H - N; ++i) {
            int j;
            for (j = 0; j < N; ++j) {
                if (needle[j] != haystack[i + j]) {
                    break;
                }
            }
            if (j == N) {
                return i;
            }
        }

        return -1;
    
    }
};