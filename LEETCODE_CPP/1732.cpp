#include "leetcode.h"

/* FASTER SOLUTION */
class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int maxHeight = 0;

        int total = 0;

        for(int g:gain)
        {
            total+=g;
            maxHeight = max(maxHeight, total);
        }

        return maxHeight;

    }
};

// class Solution {
// public:
//     int largestAltitude(vector<int>& gain) {
//         int largest = 0;
        
//         vector<int> altitudes = {0};
//         for (int i = 0; i < gain.size(); i++) {
//             int element = altitudes[i] + gain[i];
//             if (element > largest) {
//                 largest = element; 
//             }
//             altitudes.push_back(element);
//         }

//         return largest; 
//     }
// };

int main () {
    Solution solution;

    vector<vector<int>> testCases = {
        {-5,1,5,0,-7},
        {-4,-3,-2,-1,4,3,2},
    };

    for (auto testCase : testCases) 
        cout << solution.largestAltitude(testCase) << endl;

    return 0;
}