class Solution {
public:
  vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int,int> m;
    vector<int> ans;
    for(int i=0;i<nums.size();i++){
        int first=nums[i];
        int second=target-first;
        if(m.find(second)!=m.end()){
            ans.push_back(i);
            ans.push_back(m[second]);
            break;
        }
        m[first]=i;
    }
    return ans;
  }
  };

/*
    // Two pointers - optimized approach

        int n=nums.size();
        vector<pair<int,int>> res;
        int i=0;
        int j=n-1;
          // Store numbers with their original indices
        for (int i = 0; i < n; i++) {
            res.push_back({nums[i], i});
        }

        // Sort based on values
        sort(res.begin(), res.end());
        while(i<j){
            int pairSum=res[i].first+res[j].first;
            if(pairSum>target){
                j--;
            }
            if(pairSum<target){
                i++;
            }
            if(pairSum==target){
               return {res[i].second, res[j].second}; 
        }
       
    }
     return {}; 
    }
*/


// Brute Force Approach
/*
 int n = nums.size();
        for (int i = 0; i < n - 1; i++) {
            for (int j = i + 1; j < n; j++) {
                if (nums[i] + nums[j] == target) {
                    return {i, j};
                }
            }
        }
        return {};
*/