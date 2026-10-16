// Read numbers until -1; skip other negative numbers using continue.
#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter numbers (-1 to stop):\n";

    while (true) {
        cin >> number;
        if (!cin) {
            cout << "Invalid input.\n";
            return 1;
        }
        if (number == -1) {
            break; // -1 is the sentinel that ends input.
        }
        if (number < 0) {
            continue; // Skip other negative numbers.
        }
        cout << "Accepted number: " << number << '\n';
    }
    return 0;
}
