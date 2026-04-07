class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> set;

        for(int num:nums){
            set.insert(num);
        }
       
        int longestConsecutiveSequence=0;

        for(int num:set){
            if(set.find(num-1)==set.end()){
                int current=num;
                int streak=1;

                while(set.find(current+1)!= set.end()){
                    set.erase(current+1);
                    current++;
                    streak++;
                }
                longestConsecutiveSequence=max(longestConsecutiveSequence, streak);
            }

        }
        return longestConsecutiveSequence;
    }
};