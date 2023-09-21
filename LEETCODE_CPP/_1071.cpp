#include "leetcode.h"

using namespace std;

class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if (str1 + str2 != str2 + str1) {
            return "";
        }

        // Get the GCD of the two lengths.
        int gcdLength = gcd(str1.size(), str2.size());
        return str1.substr(0, gcdLength);
    }
};

int main () {
    Solution solution;
    string result1 = solution.gcdOfStrings("ABABAB","ABAB");
    cout << result1;

    return 0;
}