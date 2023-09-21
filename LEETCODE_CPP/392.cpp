#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

class Solution {
public:
    bool isSubsequence(string s, string t) {
        int m = s.size();
        int n = t.size();
        int i = 0, j = 0;
        
        while(i < m && j < n) {
            if(s[i] == t[j]) {
                i++;
            }
            j++;
        }

        if (i == m) {
            return 1;
        } else {
            return 0;
        }
    }
};

int main () {

    Solution p;

    vector<vector<string>> testCases = {
        {"abc","ahbgdc"},
        {"axc","ahbgdc"},
    };

    for (auto testCase : testCases) {
        cout << p.isSubsequence(testCase[0], testCase[1]) << endl; 
    }

    return 0;
}