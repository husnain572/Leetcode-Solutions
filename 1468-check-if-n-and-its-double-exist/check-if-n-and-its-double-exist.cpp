class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
    unordered_set<int> st;
    for(int val:arr){
        if(st.count(2*val) ||
        (val%2==0 && st.count(val/2) )){
            return true;
        }
        st.insert(val);
    }
    return false;
    }
};