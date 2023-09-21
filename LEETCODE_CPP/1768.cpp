#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string return_str = "";
        
        int i = 0, max;
        if (word1.length() < word2.length()) 
            max = word2.length();
        else 
            max = word1.length(); 
        // cout << max; 


        while (i < max) {
            if (i < word1.length())
                return_str += word1[i];
            if (i < word2.length())
                return_str += word2[i];
            i++; 
        };

        return return_str;
    }
};


int main () {

    Solution solution;

    cout << solution.mergeAlternately("abc","pqr") << endl; // "apbqcr"
    cout << solution.mergeAlternately("ab","pqrs") << endl; // "apbqrs"
    cout << solution.mergeAlternately("abcd","pq") << endl; // "apbqcd"
    cout << solution.mergeAlternately("","h") << endl; 

    return 0;
}