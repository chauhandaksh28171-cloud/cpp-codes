// Calculate factorial using a while loop.
#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a non-negative integer (0 to 20): ";
    cin >> number;

    if (number < 0 || number > 20) {
        cout << "Please enter a number from 0 to 20.\n";
        return 0;
    }

    unsigned long long factorial = 1;
    int counter = 1;
    while (counter <= number) {
        factorial *= static_cast<unsigned long long>(counter);
        ++counter;
    }

    cout << number << "! = " << factorial << '\n';
    return 0;
}
