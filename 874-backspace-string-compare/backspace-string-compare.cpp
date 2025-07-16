class Solution {
public:
    string match_string(string s) {
        stack<char> st;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '#') {
                if (!st.empty()) {
                    st.pop();
                }
            } else {
                st.push(s[i]);
            }
        }
        string resulting_str = "";
        while (!st.empty()) {
            resulting_str += st.top();
            st.pop();
        }
        reverse(resulting_str.begin(), resulting_str.end());
        return resulting_str;
    }

    bool backspaceCompare(string s, string t) {
        return match_string(s) == match_string(t);
    }
};