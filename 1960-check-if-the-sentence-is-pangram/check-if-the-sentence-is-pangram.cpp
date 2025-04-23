class Solution {
public:
    bool checkIfPangram(string sentence) {
      set<char> s;
      for(auto ch:sentence){
        if (isalpha(ch)){
            s.insert(tolower(ch));
        }
      }
      return s.size() == 26;
    }
};