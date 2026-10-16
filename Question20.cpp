// Question 20: Check whether two strings are anagrams using string functions

#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

int main() {
    char first[300], second[300];
    int counts[256] = {0};

    cout << "Enter first string: ";
    cin.getline(first, 300);
    cout << "Enter second string: ";
    cin.getline(second, 300);

    // Ignore spaces and letter case when comparing anagrams.
    for (int i = 0; i < strlen(first); i++) {
        unsigned char ch = static_cast<unsigned char>(first[i]);
        if (!isspace(ch))
            counts[tolower(ch)]++;
    }
    for (int i = 0; i < strlen(second); i++) {
        unsigned char ch = static_cast<unsigned char>(second[i]);
        if (!isspace(ch))
            counts[tolower(ch)]--;
    }

    bool anagram = true;
    for (int i = 0; i < 256; i++) {
        if (counts[i] != 0) {
            anagram = false;
            break;
        }
    }

    if (anagram)
        cout << "The strings are anagrams.\n";
    else
        cout << "The strings are not anagrams.\n";

    return 0;
}
