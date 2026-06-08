class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string res = "";
        if (strs.empty())
            return res;
        for (int i = 0; i < strs[0].size(); i++) {
            char current_ch = strs[0][i];

            for (int j = 1; j < strs.size(); j++) {
                if (i >= strs[j].size() || strs[j][i] != current_ch ) {
                    return res;
                }
            }
                res += current_ch;
        }
        return res;
    }
};