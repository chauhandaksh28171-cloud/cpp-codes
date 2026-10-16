// Print numbers from 1 to 10, stopping at 7 using break.
#include <iostream>
using namespace std;

int main() {
    for (int number = 1; number <= 10; ++number) {
        if (number == 7) {
            break; // Stop before printing 7.
        }
        cout << number << " ";
    }
    cout << '\n';
    return 0;
}
