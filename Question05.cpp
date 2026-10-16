// Question 5: Concatenate two strings using strcat()

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char first[400], second[200];

    cout << "Enter first string: ";
    cin.getline(first, 200);
    cout << "Enter second string: ";
    cin.getline(second, 200);

    strcat(first, second);
    cout << "Concatenated string = " << first << '\n';
    return 0;
}
