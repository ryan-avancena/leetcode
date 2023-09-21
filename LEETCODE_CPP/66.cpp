#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int end = digits.size() - 1;
        while (end >= 0) {
            if (digits[end] == 9) {
                digits[end] = 0;
            } else {
                digits[end] += 1;
                return digits;
            }
            end--;
        }
        digits.insert(digits.begin(),1);
        return digits;
    }
};




int main()
{
    Solution problem;
    vector<vector<int>> test_cases = 
    {
        {1,2,3},
        {4,3,2,1},
        {9},
        {9,9},
        {9,9,9},
        {9,0,0,9},
        {8,9,9},
    };

    for (vector<int> test_case : test_cases)
    {
        problem.plusOne(test_case);
        for (int elements : test_case)
        {
            cout << elements << " ";
        }
        cout << endl; 
    }

    return 0;
}

