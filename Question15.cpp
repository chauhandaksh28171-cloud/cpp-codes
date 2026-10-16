// Display Armstrong numbers between 1 and 500.
#include <iostream>
using namespace std;

int main() {
    for (int number = 1; number <= 500; ++number) {
        int temporary = number;
        int sum = 0;

        while (temporary > 0) {
            int digit = temporary % 10;
            sum += digit * digit * digit; // Numbers in this range have at most 3 digits.
            temporary /= 10;
        }

        if (sum == number) {
            cout << number << " ";
        }
    }
    cout << '\n';
    return 0;
}
