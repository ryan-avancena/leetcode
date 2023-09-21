#include<iostream>
#include<string>
#include<vector> 
#include <ctype.h>
#include <cctype>

using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
       int start=0;
       int end=s.size()-1;
       while(start<=end){
           if(!isalnum(s[start])) {
                start++; 
                continue;
            }

           if(!isalnum(s[end])){
                end--;
                continue;
            }

           if(tolower(s[start])!=tolower(s[end]))
                return false;
           
           else{
               start++;
               end--;
           }
       }
       return true;
    }
};

int main () {

    Solution p;

    vector<string> testCases = {
        "raceacar", // 0 
        "racecar",  // 1 
        " ", // 1
        "A man, a plan, a canal: Panama", // 1
        "0P", // 0
    };

    for (auto testCase : testCases) {
        cout << p.isPalindrome(testCase) << endl; 
    }

    return 0;
}

/*
class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> string;
        for (int i  = 0; i < s.length(); i++) {
            if (isalpha(s[i]) || isdigit(s[i])) {
                char chr = tolower(s[i]);
                string.push_back(chr);
            }
        }

        if (string.size() <= 1) {
            return true; 
        } 
        
        int first = 0, last = string.size() - 1; 
        int middle = (first + last) / 2;

        while (first <= middle) {
            if (string[first] == string[last]) {
                first++;
                last--;
            } else {
                return false;
            }
        }

        return true;
    }
};


class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> string;
        for (int i  = 0; i < s.length(); i++) {
            if (isalpha(s[i]) || isdigit(s[i])) {
                char chr = tolower(s[i]);
                string.push_back(chr);
            }
        }

        if (string.size() <= 1) {
            return true; 
        } 

        vector<char> rev_string;
        int j = string.size() - 1; 

        while (j >= 0) {
            rev_string.push_back(string[j]);
            j--;
        }

        if (rev_string == string) {
            return true; 
        } else {
            return false; 
        }

    }
};

*/