class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n = nums.size();
        int first_max = 0;
        int second_max = 0;
        for (int i = 0; i < n; i++) {
            int x = nums[i];
            if (x > first_max) {
                second_max = first_max;
                first_max = x;
            } else if (x > second_max) {
                second_max = x;
            }
        }
        return (first_max - 1) * (second_max - 1);
    }
};