#include<iostream>
#include<vector>
#include<unordered_map>

using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        /* create unordered-map for ransomNote keeping track of characters */
        unordered_map<char,int> mMap; 
        for (char letter : magazine) {
            mMap[letter]++; 
        }

        for (char letter : ransomNote) {
            /* check if magazine-map contains the letter */
            if (!mMap[letter]) {
                return false; 
            } 
            mMap[letter]--;
        }
        return true; 
    }
};

int main () {
    vector<vector<string>> testCases = {
        {"a","b"},
        {"aa","ab"},
        {"aa","aab"},
    };

    Solution solution;

    for (vector<string> testCase : testCases) {
        bool result = solution.canConstruct(testCase[0],testCase[1]);
        // cout << endl; 
        cout << result << endl; 
    }

    return 0;
}