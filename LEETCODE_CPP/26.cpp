#include<iostream>
#include<vector>
#include<set> 
using namespace std;

/* NOTES:
WORK WITH FRONT AND END OF ARRAY
*/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int size = nums.size();
        int count = 0;

        for (int idx = 1; idx < size; idx++) {
            if (nums[idx] == nums[idx-1]) {
                count++;
            }
            else {
                nums[idx-count] = nums[idx];
            }
        }
        return size-count;
    };
};

int main ()
{
    Solution problem;
    vector<vector<int>> nums = {
        {0,0,1,1,1,2,2,3,3,4},
        {1,1,2},
    };

    // {0,1,2,3,4}

    for (vector<int> array : nums)
    {
        cout << problem.removeDuplicates(array) << endl;
    }

    return 0;
}