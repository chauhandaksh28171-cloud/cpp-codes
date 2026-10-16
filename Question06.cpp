// Question 6: Join first name and last name using strcat()

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char fullName[200], lastName[100];

    cout << "Enter first name: ";
    cin.getline(fullName, 100);
    cout << "Enter last name: ";
    cin.getline(lastName, 100);

    strcat(fullName, " ");
    strcat(fullName, lastName);

    cout << "Full name = " << fullName << '\n';
    return 0;
}
