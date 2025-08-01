class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
      int res=0;
      for(const string& word:words){
            if(word.substr(0,pref.size())==pref){
                res++;
            }
      }
      return res;
    }
};




/* Second Approach
class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int res = 0;
        int len = pref.size();
        for (const string& word : words) {
            if (word.size() >= len) {
                string ans = "";
                for (int j = 0; j < len; j++) {
                    ans += word[j];
                }
                if (ans == pref) {
                    res++;
                }
            }
        }
        return res;
    }
};

*/