class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max_wealth=0;
        for (int i=0;i<accounts.size();i++){
            int wealth=accumulate(accounts[i].begin(),accounts[i].end(),0);
            max_wealth=max(max_wealth,wealth);
        }
        return max_wealth;
    }
};