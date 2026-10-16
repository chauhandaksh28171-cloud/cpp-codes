// Display even numbers from 1 to 20, skipping multiples of 4 using continue.
#include <iostream>
using namespace std;

int main() {
    for (int number = 1; number <= 20; ++number) {
        if (number % 2 != 0) {
            continue; // Skip odd numbers.
        }
        if (number % 4 == 0) {
            continue; // Skip multiples of 4.
        }
        cout << number << " ";
    }
    cout << '\n';
    return 0;
}
