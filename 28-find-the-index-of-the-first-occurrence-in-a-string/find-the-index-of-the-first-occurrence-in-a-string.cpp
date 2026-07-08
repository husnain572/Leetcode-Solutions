class Solution {
public:
    int strStr(string haystack, string needle) {
        int h = haystack.length();
        int n = needle.length();
        if (h < n)
            return -1;
        if (h == 0)
            return 0;
        for (int i = 0; i < h; i++) {
            if (haystack[i] == needle[0]) {
                if (haystack.substr(i, n) == needle) {
                    return i;
                }
            }
        }
        return -1;
    }
};