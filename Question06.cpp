// Check whether a number is prime; terminate the checking loop early using break.
#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter an integer: ";
    cin >> number;

    bool isPrime = (number >= 2);
    for (int divisor = 2; isPrime && divisor <= number / divisor; ++divisor) {
        if (number % divisor == 0) {
            isPrime = false;
            break; // A divisor was found, so stop checking.
        }
    }

    if (isPrime) {
        cout << number << " is a prime number.\n";
    } else {
        cout << number << " is not a prime number.\n";
    }
    return 0;
}
