#include "leetcode.h"

/*
Input: nums1 = [1,2,3], nums2 = [2,4,6]
Output: [[1,3],[4,6]]

Explanation:
For nums1, nums1[1] = 2 is present at index 0 of nums2, whereas nums1[0] = 1 and nums1[2] = 3 are not present in nums2. 
Therefore, answer[0] = [1,3].

For nums2, nums2[0] = 2 is present at index 1 of nums1, whereas nums2[1] = 4 and nums2[2] = 6 are not present in nums2. 
Therefore, answer[1] = [4,6].

*/

class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        unordered_set<int> set1(nums1.begin(), nums1.end());
        unordered_set<int> set2(nums2.begin(), nums2.end());

        // for (auto num : set1) {
        //     cout << num << " ";
        // }

        vector<int> distinct_nums1, distinct_nums2;
        for (int num : set1) {
            // if no instances if `num` in set1, pushback num into distinct nums
            if (set2.count(num) == 0) {
                distinct_nums1.push_back(num);
            }
        }

        for (int num : set2) {
            if (set1.count(num) == 0) {
                distinct_nums2.push_back(num);
            }
        }

        return {distinct_nums1, distinct_nums2};
    }
};

int main () {
    Solution solution;

    vector<vector<vector<int>>> testCases = {
        {{1,2,3},{2,4,6}},
        {{1,2,3,3},{1,1,2,2}},
    };

    for (auto testCase : testCases) {
        vector<vector<int>> result = solution.findDifference(testCase[0],testCase[1]);
    }
}