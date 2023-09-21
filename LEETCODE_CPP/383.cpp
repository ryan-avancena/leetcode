#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        
        unordered_map <char, int> map;
        
        for(auto c: magazine) 
            map[c] = map[c] + 1; // increases count of character by 1
        
        for(auto c: ransomNote)
        {
            if(!map[c]) // if count of characters is <= 0
                return false;
            
            map[c]--; // decreases count of character by 1
        }
        
        return true;
    }
};

int main () {
    Solution p;

    vector<vector<string>> testCases = {
        {"a","b"},
        {"aa","ab"},
        {"aa","aab"},
    };

    for (auto testCase : testCases) {
        cout << p.canConstruct(testCase[0],testCase[1]) << endl;
    }

    return 0;
}