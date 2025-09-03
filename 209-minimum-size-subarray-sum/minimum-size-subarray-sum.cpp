class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int sum=0, left=0, minLen=INT_MAX;
        for(int right=0;right<nums.size();right++){
            sum+=nums[right];
            while(sum>=target){
                minLen=min(minLen, right-left+1);
                sum-=nums[left++];
            }
        }
            return (minLen!=INT_MAX)?minLen:0;
    }
};