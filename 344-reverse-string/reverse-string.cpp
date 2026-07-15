#include <utility> 
class Solution {
public:
    void rs_recursion(vector<char>& s, int left, int right) {
        if (left >= right) {
            return;
        }
        swap(s[left], s[right]);

        rs_recursion(s, left+1, right-1);
    }
    void reverseString(vector<char>& s) {
     
        rs_recursion(s, 0, s.size()-1);
    }
};