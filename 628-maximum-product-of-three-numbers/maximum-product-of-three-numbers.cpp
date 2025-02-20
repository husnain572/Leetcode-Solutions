class Solution {
public:
    int maximumProduct(vector<int>& nums) {
    sort(nums.begin(), nums.end(), greater<int>());
    int n=nums.size();
    return max(nums[0]*nums[1]*nums[2],nums[n-1]*nums[n-2]*nums[0]);
    }
};

/*
nums = [-10, -10, 1, 3, 5]
Sorted (Descending): [5, 3, 1, -10, -10]

nums[0]*nums[1]*nums[2] = 5*3*1 = 15
nums[n-1]*nums[n-2]*nums[0] = (-10)*(-10)*5 = 500
Maximum = 500
*/