class Solution {
public:
    int gcd(int num1,int num2){
        if(num1==0) return num2; 
        if(num2==0) return num1; 
        if(num1==num2) return num1; 
        if(num1>num2){
          return  gcd(num1%num2,num2);
        }
           return gcd(num1,num2%num1);
    }
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int min=nums[0];
        int max=nums[nums.size()-1];
        return gcd(min,max);

    }
};