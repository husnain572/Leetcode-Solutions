class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int answer=0;
        sort(nums.begin(),nums.end());
        for (int i=0;i<nums.size();i++){
            if(i%2==0){
                answer=answer+nums[i];
            }
        }
        return answer;

    }
};
