// Question 11: Check whether a string is palindrome using strrev()

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char text[200], reversed[200];

    cout << "Enter a string: ";
    cin.getline(text, 200);

    strcpy(reversed, text);
    int length = strlen(reversed);
    for (int i = 0; i < length / 2; i++) {
        char temp = reversed[i];
        reversed[i] = reversed[length - 1 - i];
        reversed[length - 1 - i] = temp;
    }

    if (strcmp(text, reversed) == 0)
        cout << "It is a palindrome.\n";
    else
        cout << "It is not a palindrome.\n";

    return 0;
}
