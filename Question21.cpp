// Find the sum of even and odd digits in a given integer.
#include <iostream>
using namespace std;

int main() {
    long long number;
    cout << "Enter an integer: ";
    cin >> number;

    if (number < 0) {
        number = -number;
    }

    long long evenSum = 0, oddSum = 0;
    do {
        int digit = static_cast<int>(number % 10);
        if (digit % 2 == 0) {
            evenSum += digit;
        } else {
            oddSum += digit;
        }
        number /= 10;
    } while (number > 0);

    cout << "Sum of even digits = " << evenSum << '\n';
    cout << "Sum of odd digits = " << oddSum << '\n';
    return 0;
}
