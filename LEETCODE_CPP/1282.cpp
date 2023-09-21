#include <vector>
#include <iostream>
#include <unordered_map>
#include <map>

using namespace std;

class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        unordered_map<int,vector<int>> umap;
        vector<vector<int>> returnGroups;

        for (int i = 0; i < groupSizes.size(); i++) {
            int groupSize = groupSizes[i];
            umap[groupSize].push_back(i);

            if (umap[groupSize].size() == groupSize) {
                returnGroups.push_back(umap[groupSize]);
                umap[groupSize].clear();
            }
        }
        return returnGroups;
    }
};

int main() {
    vector<vector<int>> testCases = {
        {3,3,3,3,3,1,3},
        {2,1,3,3,3,2},
    };

    Solution solution;

    for(vector<int> testCase : testCases) {
        vector<vector<int>> result = solution.groupThePeople(testCase);
        for(vector<int> resultA : result) {
            for(auto a : resultA) {
                cout << a << " ";
            }
            cout << endl; 
        }
        cout<<endl;
    }

    return 0;
}