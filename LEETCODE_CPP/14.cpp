#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string global_string = "";
        for (string string : strs)
        {
            int index = 0; 
            for (int i = 0; i < string.size(); i++)
            {
                cout << string[i]; 
            }
        }
        return 0; 
    }
};


int main () 
{
    vector<vector<string>> strings =
    {
        {"flower","flow","flight"},
        {"ryan", "ry", "every"},
    };

    for (vector<string> v_string : strings)
    {
        Solution problem;
        problem.longestCommonPrefix(v_string);
    }

    return 0;
}