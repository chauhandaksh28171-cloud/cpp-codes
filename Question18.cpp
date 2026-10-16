// Question 18: Copy first five characters using strncpy()

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char source[200], destination[6];

    cout << "Enter a string: ";
    cin.getline(source, 200);

    strncpy(destination, source, 5);
    destination[5] = '\0';  // Ensure destination is null-terminated.

    cout << "First five characters = " << destination << '\n';
    return 0;
}
