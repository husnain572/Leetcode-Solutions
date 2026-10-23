class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int res=1;
        int i=0;
        int j=1;
        while(j<nums.size()){
            if(nums[j]==nums[j-1]){
                j++;
                continue;
            }
            else{
                nums[i+1] = nums[j];
                i++;
                j++;
                res+=1;
            }
        }
        return res;
    }
};