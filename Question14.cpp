// Question 14: Find a substring using strstr()

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char text[300], substring[100];

    cout << "Enter the main string: ";
    cin.getline(text, 300);
    cout << "Enter the substring: ";
    cin.getline(substring, 100);

    char *position = strstr(text, substring);
    if (position != nullptr)
        cout << "Substring found at index " << (position - text) << '\n';
    else
        cout << "Substring not found.\n";

    return 0;
}
