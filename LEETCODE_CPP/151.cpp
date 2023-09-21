#include<iostream>
#include<string>
#include<vector>
#include<stack>

using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        string returnString = "";
        stack<string> words;

        string addString = "";
        // cout << s.length() << endl; 

        for (int i = 0; i < s.length(); i++) {
            char letter = s[i];
            if(letter == ' ' && addString != "") {
                words.push(addString);
                addString = "";
            } else if (letter != ' ' && i < s.length() - 1) {
                addString += letter; 
            } else if (letter != ' ' && i == s.length() - 1) {
                addString += letter;
                words.push(addString);
            }
        }

        // for (char letter : s) {
        //     if((letter == ' ' && addString != "") || ) {
        //         words.push(addString);
        //         addString = "";
        //     } else if (letter != ' ') {
        //         addString += letter; 
        //     }
        // }

        while(!words.empty()) {
            if (words.size() != 1) {
                returnString += words.top();
                returnString += " ";
            } else {
                returnString += words.top(); 
            }
            words.pop();
        }

        return returnString;

    }
};

int main() {
    vector<string> testCases= {
        "the sky is blue",
        "  hello  world  ",
        "a good    example",
        "",
    };

    Solution solution;

    for (auto a : testCases) {
        string result = solution.reverseWords(a);
        cout << result << endl; 
        // cout << endl; 
    }    

    return 0;
}