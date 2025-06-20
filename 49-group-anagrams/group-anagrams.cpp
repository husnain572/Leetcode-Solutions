class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> ang_map;
        for(const string& str:strs){
            string sorted_str=str;
            sort(sorted_str.begin(),sorted_str.end());
            ang_map[sorted_str].push_back(str);
        }
        vector<vector<string>> res;
        for(auto& pair:ang_map){
            res.push_back(pair.second);
        }
        return res;
    }
};