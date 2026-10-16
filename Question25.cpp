// Print the prime factors of a positive integer, including repeated factors.
#include <iostream>
using namespace std;

int main() {
    long long number;
    cout << "Enter an integer greater than 1: ";
    cin >> number;

    if (number <= 1) {
        cout << "Please enter an integer greater than 1.\n";
        return 0;
    }

    cout << "Prime factors: ";
    for (long long divisor = 2; divisor <= number / divisor; ++divisor) {
        while (number % divisor == 0) {
            cout << divisor << " ";
            number /= divisor;
        }
    }
    if (number > 1) {
        cout << number;
    }
    cout << '\n';
    return 0;
}
