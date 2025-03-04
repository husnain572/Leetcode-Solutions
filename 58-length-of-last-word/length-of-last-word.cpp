class Solution {
public:
    int lengthOfLastWord(string s) {
        int count=0;
int i=s.size()-1;
while(i>=0 && s[i]==' '){
i=i-1;
}
while(i>=0 && s[i]!=' '){
count=count+1;
i=i-1;
}
return count;
    }
};