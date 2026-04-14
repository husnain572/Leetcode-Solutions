class Solution {
public:
    bool checkIfPangram(string sentence) {
        set<char> st;
        for(auto ch:sentence){
            if(isalpha(ch)){
                st.insert(ch);
            }
        }
        return st.size()==26;
    }
};