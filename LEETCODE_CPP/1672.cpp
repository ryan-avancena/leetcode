#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int max_global = 0;
        for (vector<int> account : accounts)
        {
            int size = account.size();
            int max_current = 0;
            for (int i = 0; i < size; i++)
            {
                max_current += account[i];
            }
            if (max_current > max_global)
            {
                max_global = max_current;
            }
        }
        return max_global; 
    }
};


int main ()
{   
    Solution problem;
    vector<vector<int>> accounts = 
    {
        {1,5},
        {3,7},
        {3,5},
    };
    cout << problem.maximumWealth(accounts);
    return 0; 
}