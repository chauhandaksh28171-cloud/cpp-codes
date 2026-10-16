// Print a multiplication table, stopping when the product exceeds 50.
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

    for (int multiplier = 1; multiplier <= 10; ++multiplier) {
        int product = number * multiplier;
        if (product > 50) {
            break;
        }
        cout << number << " x " << multiplier << " = " << product << '\n';
    }
    return 0;
}
