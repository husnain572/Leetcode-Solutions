class Solution {
public:
    string reversePrefix(string word, char ch) {
        int idx=-1;

        for(int i=0;i<word.length();i++){
            if(word[i]==ch){
                idx=i;
                break;
            }
        }
        if (idx==-1) return word;
        int l=0;
        int r=idx;
        while(l<r){
            swap(word[l], word[r]);
            l++;
            r--;
        }
        return word;
    }
};