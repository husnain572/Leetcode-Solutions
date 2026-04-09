class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_water=0;
       int left_ptr=0;
       int right_ptr=height.size()-1;
       while(left_ptr<right_ptr){
        int width = right_ptr-left_ptr;
        int ht=min(height[left_ptr], height[right_ptr]);
        int curr_water=ht*width;
        max_water=max(max_water, curr_water);
        height[left_ptr]<height[right_ptr]?left_ptr++:right_ptr--;

       } 
       return max_water;
    }
};