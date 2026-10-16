// Count positive numbers until 0 is entered, using break.
#include <iostream>
using namespace std;

int main() {
    int number;
    int positiveCount = 0;

    cout << "Enter integers (0 to stop):\n";
    while (true) {
        cin >> number;
        if (!cin) {
            cout << "Invalid input.\n";
            return 1;
        }
        if (number == 0) {
            break;
        }
        if (number > 0) {
            ++positiveCount;
        }
    }

    cout << "Count of positive numbers = " << positiveCount << '\n';
    return 0;
}
