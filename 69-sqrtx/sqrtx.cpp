class Solution {
public:
    int mySqrt(int x) {
        int answer=0;
        int low=0;
        int high=x;
        while(low<=high){
       long long mid=low+(high-low)/2;
            if(mid*mid==x){
                return mid;
            }else if(mid*mid<x){
                low=mid+1;
                answer=mid;
            }else{
                high=mid-1;
            }
        }
        return answer;
    }
};