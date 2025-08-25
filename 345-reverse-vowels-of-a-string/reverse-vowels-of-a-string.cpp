class Solution {
public:
    bool isVowel(char& c){
        if(c=='a' || c=='e' ||  c=='o' ||  c=='i' ||  c=='u' 
        || c=='A' ||  c=='E' ||  c=='O' ||  c=='I' ||  c=='U'){
            return true;
        }

        return false;    
    }
    string reverseVowels(string s) {
        int i=0;
        int j=s.length()-1;
        while(i<j){
            if(!isVowel(s[i])){
                i++;
            }else if(!isVowel(s[j])){
                j--;
            }else{
                swap(s[i],s[j]);
                i++;
                j--;
            }
        }
        return s;
    }
};