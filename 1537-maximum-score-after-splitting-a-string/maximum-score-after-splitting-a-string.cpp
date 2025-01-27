class Solution {
public:
    int maxScore(string s) {
        int max_count=0;
        for (int i=0;i<s.length()-1;++i){
            int left_count=count(s.begin(),s.begin()+i+1,'0');
            int right_count=count(s.begin()+1+i,s.end(),'1');
            max_count=max(max_count,left_count+right_count);
        }
        return max_count;
    }
};