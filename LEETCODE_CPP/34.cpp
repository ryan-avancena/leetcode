#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = -1;
        int last = -1;

        if (nums.size() == 1) {
            if (nums[0] == target) {
                return {0,0};
            } else {
                return {-1,-1};
            }
        }

        int left = 0, right = nums.size()-1;
        bool foundLeft = false, foundRight = false; 

        for (int i = left; i < nums.size(); i++) {
            if (!foundLeft && target == nums[i]) {
                first = i; 
            } else if (foundLeft && target == nums[i]) {
                last = i; 
            }
        }

        if (foundLeft && !foundRight) {
            return {first,first};
        } else if (foundRight && !foundLeft) {
            return {last,last};
        }

        return {first,last};        
    }
};

int main () {
    Solution solution;

    vector<int> result;

    vector<int> testCase1 = {5,7,7,8,8,10};
    result = solution.searchRange(testCase1,8);
    for(auto a : result) {
        cout << a << " ";
    }

    cout << endl; 

    vector<int> testCase2 = {1,3};
    result = solution.searchRange(testCase2,1);
    for(auto a : result) {
        cout << a << " ";
    }

    cout << endl;

    vector<int> testCase3 = {1,2,3};
    result = solution.searchRange(testCase3,2);
    for(auto a : result) {
        cout << a << " ";
    }

    return 0;
}