// Find and print all prime numbers between 1 and N.
#include <iostream>
using namespace std;

int main() {
    int limit;
    cout << "Enter N: ";
    cin >> limit;

    if (limit < 2) {
        cout << "There are no prime numbers between 1 and " << limit << ".\n";
        return 0;
    }

    for (int number = 2; number <= limit; ++number) {
        bool isPrime = true;
        for (int divisor = 2; divisor <= number / divisor; ++divisor) {
            if (number % divisor == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            cout << number << " ";
        }
    }
    cout << '\n';
    return 0;
}
