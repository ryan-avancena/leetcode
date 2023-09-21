#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>return_int;
        for (int i = 0; i < nums.size(); i++)
        {
            int temp = nums[0];
            for(int j = 1; j <= i; j++)
            {
                temp += nums[j]; 
            }
            return_int.push_back(temp); 
        }
        return {return_int};
    }
};


int main()
{
    Solution problem;
    vector<vector<int>> v_ints =
    {
        {1,2,3,4},
        {3,1,2,10,1}
    };

    for (vector<int> v_int : v_ints)
    {
        problem.runningSum(v_int);
    }



    return 0;
}