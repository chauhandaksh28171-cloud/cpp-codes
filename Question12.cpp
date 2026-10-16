// Question 12: Find first occurrence of a character using strchr()

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char text[200], character;

    cout << "Enter a string: ";
    cin.getline(text, 200);
    cout << "Enter a character to find: ";
    cin >> character;

    char *position = strchr(text, character);
    if (position != nullptr)
        cout << "First occurrence is at index " << (position - text) << '\n';
    else
        cout << "Character not found.\n";

    return 0;
}
