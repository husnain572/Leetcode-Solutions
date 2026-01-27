class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals,
                               vector<int>& newInterval) {
        intervals.push_back(newInterval);
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> merged;
        merged.push_back(intervals[0]);
        for (int i = 1; i < intervals.size(); i++) {
            vector<int>& current = intervals[i];
            vector<int>& last = merged.back();

            if (current[0] <= last[1]) {
                last[1] = max(current[1], last[1]);
            } else {
                merged.push_back(current);
            }
        }
        return merged;
    }
};