#include<iostream>
#include<vector>
#include<unordered_map>

void printUmap(std::unordered_map<int,int> uMap) {
    std::unordered_map<int,int>::iterator itr;  
    for (itr = uMap.begin(); itr != uMap.end(); itr++) {
        std::cout << itr->first << " : " << itr->second  << std::endl;
    }
}

class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        std::unordered_map<int,int> uMap;
        for (int i = 0; i < nums.size(); i++) {
            if (uMap[nums[i]] == 0) {
                uMap[nums[i]]++;
            } else {
                return true; 
            }
        }

        // printUmap(uMap);
        // std::cout << std::endl; 
        return false; 
    }
};

int main () {
    Solution solution;

    std::vector<std::vector<int>> testCases = {
        {1,2,3,1},
        {1,2,3,4},
        {1,1,1,3,3,4,3,2,4,2},
    };

    for(std::vector<int>testCase : testCases) {
        bool result = solution.containsDuplicate(testCase);
        std::cout << result << std::endl; 
    }

    return 0; 
}
