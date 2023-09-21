#include <iostream>
#include <vector> 
#include <stack>
#include <algorithm>

using namespace std;

class Solution {
public:
    string removeStars(string s) {
        stack<char> stk;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] != '*') {
                stk.push(s[i]);
            } else {
                stk.pop();
            }
        }

        string rStr = "";
        while(!stk.empty()) {
            rStr.push_back(stk.top());
            stk.pop();
        }

        reverse(rStr.begin(), rStr.end());

        return rStr;
    }
};

int main () {
    Solution solution;

    vector<string> testCases= {
        "leet**cod*e", // lecoe
        "erase*****",  // 
    };

    for (auto testCase : testCases) {
        cout << solution.removeStars(testCase) << endl; 
    }

    return 0; 
}