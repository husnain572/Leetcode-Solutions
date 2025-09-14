class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i=0,j=numbers.size()-1;
        vector<int>res;
        while(i<j){
            if(numbers[i]+numbers[j]==target){
                res={i+1,j+1};
                return res;
            }else if(numbers[i]+numbers[j]>target){
                j--;
            }else if(numbers[i]+numbers[j]<target){
                i++;
            }
        }
        return res;
    }
};