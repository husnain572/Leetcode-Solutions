#include <vector>
#include <algorithm>

class Solution {
public:
    int majorityElement(std::vector<int>& nums) {
        // Boyer-Moore Voting Algorithm - Most Optimized Approach
        int freq=0,ans=0;
        for(int i=0;i<nums.size();i++){
            if(freq==0){
                ans=nums[i];
            }
            if(ans==nums[i]){
                freq++;
            }else{
                freq--;
            }
        }
        return ans;
        }
};


// Brute Force Approach
/*
   int n=nums.size();
        for(int val:nums){
            int freq=0;
            for(int ele:nums){
                if(val==ele){
                    freq++;
                }
            }
            if(freq>n/2){
                return val;
            }
        }
        return -1;
*/

/* Optimize than brute force approach

sort(nums.begin(), nums.end()); 
        int n = nums.size();
        int freq = 1, ans = nums[0];

        for(int i = 1; i < n; i++) {  
            if(nums[i] == nums[i-1]) { 
                freq++;
            } else {
                freq = 1;
                ans = nums[i];
            }
            if(freq > n / 2) {
                return ans;
            }
        }
        return ans;
    */