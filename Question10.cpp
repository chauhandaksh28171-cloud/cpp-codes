// Question 10: Reverse a string using strrev()

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char text[200];

    cout << "Enter a string: ";
    cin.getline(text, 200);

    // strrev() is not supported by every C++ compiler, so reverse manually.
    int length = strlen(text);
    for (int i = 0; i < length / 2; i++) {
        char temp = text[i];
        text[i] = text[length - 1 - i];
        text[length - 1 - i] = temp;
    }

    cout << "Reversed string = " << text << '\n';
    return 0;
}
