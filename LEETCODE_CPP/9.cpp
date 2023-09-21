#include<iostream>

using namespace std;

/* notes: 
- trying again (08/11/2023) - had to use solution
*/

class Solution{
public:
    bool isPalindrome(int x) {

        // excludes negatives, numbers that end in 0s but not 0 itself
        if (x < 0 || x % 10 == 0 && x != 0) {
            return false; 
        }

        int i = 0;
        while (x > i) {
            i = (i * 10) + (x % 10);
            x /= 10;
        }
        return x == i || x == i / 10; 
    }
};

int main ()
{
    Solution problem;
    cout << problem.isPalindrome(121);  

    return 0;
}

/*
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x % 10 == 0 && x != 0)) // if x < 0 this wouldn't be a palindrome
        {
            return false;   
        }
        x/=10;
        cout << x; 
    }
};
*/