// Check whether a number is a strong number.
#include <iostream>
using namespace std;

int digitFactorial(int digit) {
    int factorial = 1;
    for (int value = 2; value <= digit; ++value) {
        factorial *= value;
    }
    return factorial;
}

int main() {
    int number;
    cout << "Enter a non-negative integer: ";
    cin >> number;

    if (number < 0) {
        cout << "Negative numbers are not strong numbers in this program.\n";
        return 0;
    }

    int temporary = number;
    int sum = 0;
    do {
        sum += digitFactorial(temporary % 10);
        temporary /= 10;
    } while (temporary > 0);

    if (sum == number) {
        cout << number << " is a strong number.\n";
    } else {
        cout << number << " is not a strong number.\n";
    }
    return 0;
}
