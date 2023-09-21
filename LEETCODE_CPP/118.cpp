#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> main;
        for (int i = 0; i < numRows; i++)
        {
            vector<int> row(i+1,1); // creates row of i+1 elements and initializes it to 1
            for (int j = 1; j < i; j++)
            {
                row[j] = main[i-1][j] + main[i-1][j-1]; // sum of above boxes
            }
             main.push_back(row); // add row to the main vector
        }
        return main;
    }
};

int main ()
{
    Solution p;
    vector<vector<int>> triangle = p.generate(5);
    for (const auto row : triangle) {
        for (const auto element : row) {
            cout << element << " ";
        }
        cout << endl;
    }

    return 0;
}