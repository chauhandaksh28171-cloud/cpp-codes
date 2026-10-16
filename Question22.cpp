// Check whether a number is a Harshad (Niven) number.
#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a positive integer: ";
    cin >> number;

    if (number <= 0) {
        cout << "Please enter a positive integer.\n";
        return 0;
    }

    int temporary = number;
    int digitSum = 0;
    while (temporary > 0) {
        digitSum += temporary % 10;
        temporary /= 10;
    }

    if (number % digitSum == 0) {
        cout << number << " is a Harshad number.\n";
    } else {
        cout << number << " is not a Harshad number.\n";
    }
    return 0;
}
