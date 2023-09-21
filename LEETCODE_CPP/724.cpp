#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        
        /* INTERPRET PROBLEM AS A SCALE */

        /* this sum can be done using accumulate( nums.begin(), nums.end(), 0) */
        int rightSide = 0;
        for (int a : nums) {
            rightSide += a; 
        }

        int leftSide = 0;
        for (int i = 0; i < nums.size(); i++) { 
            rightSide -= nums[i]; 
            if (leftSide == rightSide) {
                return i;
            } 
            leftSide += nums[i];
            // cout << leftSide << " : " << rightSide << endl; 
        }
        return -1; 
    }
};

int main() {
    vector<vector<int>> testCases = {
        {1,7,3,6,5,6},
        {1,2,3},
        {2,1,-1},
    };

    Solution solution;

    for(vector<int> testCase : testCases) {
        int index = solution.pivotIndex(testCase);
        cout << index << endl; 
    }


    return 0;
}