class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> mp;
        for(auto itr:s){
            mp[itr]++;
        }
        for(auto itr:t){
            mp[itr]--;
        }
        for(auto x: mp){
            if(x.second!=0) return false;
        }
        return true;
    }
};