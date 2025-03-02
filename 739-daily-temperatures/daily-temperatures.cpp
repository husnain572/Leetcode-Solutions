#include <vector>

using namespace std;

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();
        vector<int> r(n, 0); 
        vector<int> s;  

        for (int i = 0; i < n; i++) {
            while (!s.empty() && temperatures[i] > temperatures[s.back()]) {
                int index = s.back(); 
                s.pop_back();
                r[index] = i - index; 
            }
            s.push_back(i);
        }

        return r;
    }
};

    