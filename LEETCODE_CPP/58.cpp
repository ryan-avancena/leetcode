#include<iostream>
using namespace std;

int main () {
    string s = "   fly me   to   the moon  ";

    bool foundLetter = false; 
    int lengthWord = 0;

    for (int i = s.length()-1; i >= 0; i--) {
        if (s[i] != ' ') {
            foundLetter = true; 
        }

        if (foundLetter) {
            if (s[i] == ' ') {
                break; 
            } else {
                lengthWord++; 
            }
        }
    }

    cout << lengthWord; 

    return 0;
}