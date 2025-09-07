class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int curr_sum=0;
        int max_sum=INT_MIN;
        for(int val:nums){
            curr_sum+=val;
            max_sum=max(max_sum,curr_sum);
            if(curr_sum<0){
                curr_sum=0;
            }
        }
    return max_sum;
    }
};

/* Brute Force Approach - Time Limit Exceeded
    int maxSum=INT_MIN;
        for(int st=0;st<nums.size();st++){
            int currSum=0;
            for(int end=st;end<nums.size();end++){
                currSum=currSum+nums[end];
                maxSum=max(maxSum,currSum);
            }
        }
        return maxSum;

*/