// Calculate the sum of the series 1 + 2 + 3 + ... + N.
#include <iostream>
using namespace std;

int main() {
    int limit;
    cout << "Enter N (N >= 1): ";
    cin >> limit;

    if (limit < 1) {
        cout << "Please enter a positive integer.\n";
        return 0;
    }

    long long sum = 0;
    for (int number = 1; number <= limit; ++number) {
        sum += number;
    }

    cout << "Sum = " << sum << '\n';
    return 0;
}
