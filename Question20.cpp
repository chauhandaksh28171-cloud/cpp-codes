// Print the reverse of a number and check whether it is a palindrome.
#include <iostream>
using namespace std;

int main() {
    long long number;
    cout << "Enter a non-negative integer: ";
    cin >> number;

    if (number < 0) {
        cout << "Please enter a non-negative integer.\n";
        return 0;
    }

    long long original = number;
    long long temporary = number;
    long long reverse = 0;

    do {
        int digit = static_cast<int>(temporary % 10);
        reverse = reverse * 10 + digit;
        temporary /= 10;
    } while (temporary > 0);

    cout << "Reverse = " << reverse << '\n';
    if (reverse == original) {
        cout << original << " is a palindrome.\n";
    } else {
        cout << original << " is not a palindrome.\n";
    }
    return 0;
}
