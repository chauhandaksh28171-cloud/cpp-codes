// Question 13: Find last occurrence of a character using strrchr()

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char text[200], character;

    cout << "Enter a string: ";
    cin.getline(text, 200);
    cout << "Enter a character to find: ";
    cin >> character;

    char *position = strrchr(text, character);
    if (position != nullptr)
        cout << "Last occurrence is at index " << (position - text) << '\n';
    else
        cout << "Character not found.\n";

    return 0;
}
