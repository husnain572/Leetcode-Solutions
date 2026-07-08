class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int missing_num = n*(n + 1) / 2;
        for (int i = 0; i < n; i++) {
            missing_num -= nums[i];
        }
        return missing_num;
    }
};