class Solution {
public:
    char repeatedCharacter(string s) {
     map<char,int> dict;
     for(int i=0;i<s.size();i++){
        if(dict[s[i]]>0){
            return s[i];
        }
       dict[s[i]]=1;
     }
     return ' ';
    }
};