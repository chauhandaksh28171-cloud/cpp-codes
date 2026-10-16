// Check whether a number is a perfect number.
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

    int divisorSum = 0;
    for (int divisor = 1; divisor <= number / 2; ++divisor) {
        if (number % divisor == 0) {
            divisorSum += divisor;
        }
    }

    if (number > 1 && divisorSum == number) {
        cout << number << " is a perfect number.\n";
    } else {
        cout << number << " is not a perfect number.\n";
    }
    return 0;
}
