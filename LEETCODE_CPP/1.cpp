#include "leetcode.h"

using namespace std;

/* notes: 
- trying again (08/11/2023) - had to watch video
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> umap;

        /* were gonna use an unordered map here and my goal is to use the converse of every element to find the match */
        /* we use an unordered map to keep track of the index */

        for (int i = 0; i < nums.size(); i++) {
            int converse = target - nums[i];
            if (umap.find(converse) != umap.end()) {
                int key = umap.at(converse);
                return {key,i};
            } else {
                umap.emplace(nums[i],i);
            }
        }

        return {};
    }
};

int main()
{
    Solution problem;
    vector<int> nums= {2,7,11,15,7};
    vector<int> result = problem.twoSum(nums,9);
    cout << "[" << result[0] << "," << result[1] << "]";
    return 0;
}

/*
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int first = 0, second = 0; 
        for (int i=0; i<nums.size()-1; i++) 
        {
            int first_num = nums[i];
            for (int j = i+1; j < nums.size(); j++)
            {
                if (nums[j] + first_num == target)
                {
                    first = i;
                    second = j; 
                }
            }
        }
        return {first,second};
    }
};
*/