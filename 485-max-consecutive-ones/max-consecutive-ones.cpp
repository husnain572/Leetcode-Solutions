class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int final_count=0;
        int curr_count=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                curr_count++;
             
            }else{
                curr_count=0;
            }
            if(curr_count>=final_count){
                final_count=curr_count;
            }
        }   
        return final_count;
    }
};