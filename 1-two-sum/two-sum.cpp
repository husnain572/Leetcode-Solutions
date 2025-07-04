class Solution {
public:
  vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int,int> map;
    
    for(int i=0;i<nums.size();i++){
        int diff=target-nums[i];
        if(map.find(diff)!=map.end()){        
            return {map[diff],i};
        }
        map[nums[i]]=i;
    }
    return {};
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