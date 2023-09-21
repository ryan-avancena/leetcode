#include <iostream>
#include <vector> 

using namespace std;

class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n % 2 == 1 && n != 1) {
            return false;
        } else if (n <= 0) {
            return false; 
        }

        while (n > 1) {
            if (n % 2 == 1) {
                return false;
            }
            n = n / 2;
        }
        return true;
    }
};

int main () {

    Solution solution;

    vector<int> testCases = { 6 , 8 , 3 , 1, 0 , 4, 8, 64, 128};

    for (auto testCase : testCases) {
        cout << solution.isPowerOfTwo(testCase) << endl; 
    }

    return 0; 
}