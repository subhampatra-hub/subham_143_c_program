#include<stdio.h>

#include <iostream>
using namespace std;

char nonRepeatingChar(string &s) {
    int n = s.length();

    // Iterate over each character in the string
    for (int i = 0; i < n; ++i) {
        bool found = false;

        // Check if the character repeats in the
        // rest of the string
        for (int j = 0; j < n; ++j) {
            if (i != j && s[i] == s[j]) {
                found = true;
                break;
            }
        }

        // If character does not repeat, return it
        if (found == false) 
            return s[i];
    }

    // If no such character is found, return '$'
    return '$';
}

int main() {
    string s = "racecar";
  
    cout << nonRepeatingChar(s);
    return 0;
}
