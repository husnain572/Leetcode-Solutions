class Solution {
public:
    int reverse(int x) {
        int rev_num = 0;
        while (x != 0) {
            int last_dig = x % 10;
            if (rev_num > INT_MAX / 10 || rev_num < INT_MIN / 10) {
                return 0;
            }
            rev_num = rev_num * 10 + last_dig;
            x = x / 10;
        }
        return rev_num;
    }
};