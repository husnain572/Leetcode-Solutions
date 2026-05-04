class Solution {
public:
    bool isPalindrome(int x) {
        int orig_val = x;
        int rev_num = 0;
        if (x < 0)
            return false;
        while (x != 0) {
            int last_dig = x % 10;
          if(rev_num>INT_MAX/10 || rev_num<INT_MIN){
            return false;
          }
            rev_num = rev_num * 10 + last_dig;
            x = x / 10;
        }
        if (rev_num == orig_val) {
            return true;
        } else {
            return false;
        }
    }
};