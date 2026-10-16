// Question 4: Input two strings and check if equal using strcpy() and comparison

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char first[200], second[200], copiedFirst[200];

    cout << "Enter first string: ";
    cin.getline(first, 200);
    cout << "Enter second string: ";
    cin.getline(second, 200);

    strcpy(copiedFirst, first);

    if (strcmp(copiedFirst, second) == 0)
        cout << "Strings are equal.\n";
    else
        cout << "Strings are not equal.\n";

    return 0;
}
