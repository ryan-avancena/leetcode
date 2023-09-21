#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int mid =  nums.size()/2;
        int left = 0;
        int right = nums.size() - 1;

        while (left <= right) {
            if (nums[mid] < target) {
                left = mid + 1;
            } else if (nums[mid] > target) {
                right = mid - 1; 
            } else {
                return mid;
            }
            mid = left + (right - left)/2;
        }
        return mid;
    }
};

int main () {
    Solution solution; 

    vector<int> sampleVec = {1,3,5,6};
    vector<int> testCases = {
        5,2,7,0,
    };

    for (auto i : testCases) {
        int result = solution.searchInsert(sampleVec,i);
        cout << result << endl; 
    }

    return 0;
}