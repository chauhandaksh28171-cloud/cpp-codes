// Question 8: Check case-sensitive equality using strcmp()

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char first[200], second[200];

    cout << "Enter first string: ";
    cin.getline(first, 200);
    cout << "Enter second string: ";
    cin.getline(second, 200);

    if (strcmp(first, second) == 0)
        cout << "Strings are equal (case-sensitive).\n";
    else
        cout << "Strings are different (case-sensitive).\n";

    return 0;
}
