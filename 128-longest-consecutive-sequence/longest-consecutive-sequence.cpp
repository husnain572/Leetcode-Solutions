class Solution {
public:
    int longestConsecutive(vector<int>& nums) { 
        std::unordered_set<int> numset(nums.begin(), nums.end());
        int longest = 0;
        for (int num : numset) {
            if (numset.find(num - 1) == numset.end()) {
                int length = 1;
                int current = num;
                while (numset.find(current + 1) != numset.end()) {
                    length++;
                    current++;
                }
                longest = std::max(length, longest);
            }
        }
        return longest;
    }
};