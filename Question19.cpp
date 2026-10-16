// Display all strong numbers between 1 and 500.
#include <iostream>
using namespace std;

int digitFactorial(int digit) {
    int factorial = 1;
    for (int value = 2; value <= digit; ++value) {
        factorial *= value;
    }
    return factorial;
}

int main() {
    for (int number = 1; number <= 500; ++number) {
        int temporary = number;
        int sum = 0;

        while (temporary > 0) {
            sum += digitFactorial(temporary % 10);
            temporary /= 10;
        }

        if (sum == number) {
            cout << number << " ";
        }
    }
    cout << '\n';
    return 0;
}
