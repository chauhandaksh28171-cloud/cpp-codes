// Find the GCD of two integers using a loop (Euclidean algorithm).
#include <iostream>
using namespace std;

int main() {
    long long firstNumber, secondNumber;
    cout << "Enter two integers: ";
    cin >> firstNumber >> secondNumber;

    if (firstNumber < 0) firstNumber = -firstNumber;
    if (secondNumber < 0) secondNumber = -secondNumber;

    long long a = firstNumber;
    long long b = secondNumber;
    while (b != 0) {
        long long remainder = a % b;
        a = b;
        b = remainder;
    }

    cout << "GCD = " << a << '\n';
    return 0;
}
