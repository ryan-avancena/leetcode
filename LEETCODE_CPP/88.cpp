#include<iostream>
#include<vector>

using namespace std;

/* NOTES:
- make sure pointers end at 0 
*/

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // {1,2,2,3,5,6}
        int firstPointer = m - 1;
        int secondPointer = n - 1; 
        int end = m + n - 1;

        while (firstPointer >= 0) {
            if (secondPointer >= 0 && nums2[secondPointer] > nums1[firstPointer]) {
                nums1[end] = nums2[secondPointer];
                end--;
                secondPointer--;
            } else {
                nums1[end] = nums1[firstPointer];
                end--;
                firstPointer--;
            }
        }

        for (int i = 0; i < nums1.size();i++) {
            cout << nums1[i] << " ";
        }
    }
};

int main ()
{
    Solution p;
    vector<int> nums1 = {1,2,3,0,0,0}; 
    vector<int> nums2 = {2,5,6};

    p.merge(nums1,3,nums2,3);

    return 0;
}


// bigballzinyomouth