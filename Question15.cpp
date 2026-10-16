// Question 15: Check if one string is present in another using strstr()

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char text[300], searchText[100];

    cout << "Enter the main string: ";
    cin.getline(text, 300);
    cout << "Enter the string to search for: ";
    cin.getline(searchText, 100);

    if (strstr(text, searchText) != nullptr)
        cout << "The string is present.\n";
    else
        cout << "The string is not present.\n";

    return 0;
}
