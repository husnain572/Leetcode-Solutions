class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
       unordered_set<int> st;
       for(auto itr:nums) {
            if(st.count(itr)) return true;
            st.insert(itr);
       }
       return false;
    }
};