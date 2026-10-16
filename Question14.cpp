// Check whether a number is an Armstrong number.
#include <iostream>
using namespace std;

int main() {
    long long number;
    cout << "Enter a non-negative integer: ";
    cin >> number;

    if (number < 0) {
        cout << "Negative numbers are not Armstrong numbers in this program.\n";
        return 0;
    }

    long long temporary = number;
    int digits = 0;
    do {
        ++digits;
        temporary /= 10;
    } while (temporary != 0);

    temporary = number;
    long long sum = 0;
    do {
        int digit = static_cast<int>(temporary % 10);
        long long power = 1;
        for (int exponent = 0; exponent < digits; ++exponent) {
            power *= digit;
        }
        sum += power;
        temporary /= 10;
    } while (temporary != 0);

    if (sum == number) {
        cout << number << " is an Armstrong number.\n";
    } else {
        cout << number << " is not an Armstrong number.\n";
    }
    return 0;
}
