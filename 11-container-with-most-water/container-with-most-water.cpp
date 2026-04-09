class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_water=0;
        int left=0;
        int right=height.size()-1;
        while(left<right){
            int width=right-left;
            int ht=min(height[left], height[right]);
            int curr_water=width*ht;
            max_water=max(max_water, curr_water);
            height[left]<height[right]?left++:right--;
        }
        return max_water;
    }
};