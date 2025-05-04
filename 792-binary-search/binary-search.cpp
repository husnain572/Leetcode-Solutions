class Solution {
public:
   int Binarysearch(vector<int>& arr, int tar,int start,int end) {
        if(start<=end){
            int mid=start+(end-start)/2;
            if(arr[mid]==tar) return mid;
            else if(arr[mid]<=tar){
                return Binarysearch(arr,tar,mid+1,end);
            }else{
                return Binarysearch(arr,tar,start,mid-1);
            }
        }
        return -1;
    }
    int search(vector<int>& arr, int tar) {
        return Binarysearch(arr,tar,0,arr.size()-1);
    }
};