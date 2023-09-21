#include <iostream>
#include <queue>
#include <stack>

using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        vector<int> numcopy = nums;
        for(int i = 0; i < nums.size(); i++) 
            nums[(i+k) % nums.size()] = numcopy[i];
    }
};

int main () {
    vector<int> testCase = {1,2,3,4,5,6,7};
    vector<int> testCase2 = {-1,-100,3,99};

    Solution p;

    p.rotate(testCase,3);
    p.rotate(testCase2,2);

    return 0;
}