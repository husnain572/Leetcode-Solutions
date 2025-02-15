class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        vector<int> temp(arr.begin(), arr.end());
        int j = 0; 

        for (int i = 0; i < temp.size(); i++) {
            arr[j] = temp[i]; 
            j++; 
            
            if (temp[i] == 0 && j < temp.size()) { 
                arr[j] = 0;
                j++; 
            }
            
            if (j >= temp.size()) break; 
        }
    }
};