#include<iostream>
#include<vector> 
#include<unordered_map>
using namespace std;

void printFlowerBed(vector<int> flowerbed) {
    cout << "[ ";
    for(auto a: flowerbed) {
        cout << a << " ";
    }
    cout << "]" << endl; 
}


class Solution {
public:
    bool canPlaceFlowers(vector<int> flowerbed, int n) {
        for (int i = 0; i < flowerbed.size() && n > 0; i++) {
            /*  THREE CONDITIONS
                - IF SLOT IS EMPTY AND
                - IF WE'RE ON FIRST SLOT OR SLOT ON LEFT IS EMPTY AND
                - IF WE'RE ON LAST SLOT OR SLOT ON right IS EMPTY

                - THEN DROP FLOWER AND INCREMENT I
            */
            if (flowerbed[i] == 0 && (i == 0 || flowerbed[i-1] == 0) && (i == flowerbed.size()-1 || flowerbed[i+1] == 0)) {
                flowerbed[i] = 1;
                i++;
                n--;
            }
        }

        printFlowerBed(flowerbed);

        return n == 0;
    }
};

int main () {
    Solution solution;

    bool testCase1 = solution.canPlaceFlowers({1,0,0,0,1},1);
    bool testCase2 = solution.canPlaceFlowers({1,0,0,0,1},2);
    bool testCase3 = solution.canPlaceFlowers({0,0,0,0,0},1);

    cout << testCase1 << endl;
    cout << testCase2 << endl;
    cout << testCase3 << endl; 

    return 0;
}