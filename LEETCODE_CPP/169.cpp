#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

class Solution {
public:
    int majorityElement(vector<int>& arr) {
        int ele=arr[0];
        int count=0;
        for(int i=0;i<arr.size();i++){
            if (count == 0) {
                ele = arr[i];
            }
            if (ele == arr[i]) {
                count += 1;
            } else {
                count -= 1;
            }
        }
        return ele;
    }
};

int main() {
    Solution p;

    vector<vector<int>>testCases = {
        {3,2,3},
        {2,2,1,1,1,2,2},
        {2,3,1,3,1,5,1},
    };

    for (auto testCase : testCases) {
        cout << p.majorityElement(testCase) << endl; 
    }

    return 0;
}