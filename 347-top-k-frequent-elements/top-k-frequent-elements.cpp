class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int count = 0;
        unordered_map<int, int> mp;
        for (auto num : nums) {
            mp[num]++;
        }

        vector<vector<int>> bucket(nums.size() + 1);

        for (auto itr : mp) {
            int num = itr.first;
            int freq = itr.second;
            bucket[freq].push_back(num);
        }
        vector<int> ans;
        for (int i = bucket.size() - 1; i >= 0; i--) {
            for (auto num : bucket[i]) {
                ans.push_back(num);
                if (ans.size() == k)
                    return ans;
            }
        }

        return ans;
    }
};