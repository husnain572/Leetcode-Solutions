class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        long long sum = 0, max_sum = 0;
        int left = 0;

        for (int right = 0; right < nums.size(); right++) {
            sum += nums[right];
            freq[nums[right]]++;

            // shrink window if duplicate or size > k
            while (freq[nums[right]] > 1 || right - left + 1 > k) {
                sum -= nums[left];
                freq[nums[left]]--;
                left++;
            }

            if (right - left + 1 == k) {
                max_sum = max(max_sum, sum);
            }
        }

        return max_sum;
    }
};
