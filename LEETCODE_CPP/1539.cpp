#include<iostream>
#include<vector>
using namespace std;

// class Solution {
// public:
//     int findKthPositive(vector<int>& arr, int k) {
//         vector<int> missing_nums; 
//         int start = 1, index = 0; 

//         while (missing_nums.size() < k)
//         {
//             if (arr[index] != start || index >= arr.size())
//             {
//                 missing_nums.push_back(start);
//             }
//             else {
//                 index++;
//             }
//             start++;
//         }
        
//         int return_num = missing_nums[k-1];
//         return return_num;
//     }
// };


class Solution {
    public:
    int findKthPositive(vector<int>& A, int k) {
        int low = 0;
        int high = A.size()-1 ;
        int mid;
        while (low <= high) {
                mid = (low + high) / 2; // 5/2 = 2  ,   4-3=1
                cout << mid; 
                if (A[mid] - (1 + mid) < k)  //A[m]-(m+1)   --> This gives number of missing number before m'th index
                    low = mid + 1;
                else
                    high = mid-1;
            }
            cout << endl; 
            return low + k;
        }
    };


int main () 
{
    Solution problem; 
    vector<int> arr = {2,3,4,7,11};
    cout << problem.findKthPositive(arr, 5);
    return 0; 
}