#include<iostream>
#include<unordered_map>
#include<string>
#include<vector>


class Solution {
public:
    bool isAnagram(std::string s, std::string t) {
        if (s.length() != t.length()) {
            return false; 
        }

        std::unordered_map<char,int> sMap; 
        std::unordered_map<char,int> tMap; 
        for (int i = 0; i < s.length(); i++) {
            sMap[s[i]]++;
            tMap[t[i]]++;
        }

        if (sMap == tMap) {
            return true; 
        } else {
            return false; 
        }
    }
};

int main () {
    Solution solution;

    std::vector<std::vector<std::string>> testCases = {
        {"anagram","nagaram"},
        {"rat","car"},
    };

    for (std::vector<std::string> testCase : testCases) {
        bool result = solution.isAnagram(testCase[0],testCase[1]);
        std::cout << result;
        std::cout << std::endl; 
    }

    return 0;
}
