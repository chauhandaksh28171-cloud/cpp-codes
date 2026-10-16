// Find the LCM of two integers using a loop.
#include <iostream>
using namespace std;

int main() {
    long long firstNumber, secondNumber;
    cout << "Enter two integers: ";
    cin >> firstNumber >> secondNumber;

    if (firstNumber == 0 || secondNumber == 0) {
        cout << "LCM = 0\n";
        return 0;
    }
    if (firstNumber < 0) firstNumber = -firstNumber;
    if (secondNumber < 0) secondNumber = -secondNumber;

    long long larger = (firstNumber > secondNumber) ? firstNumber : secondNumber;
    long long lcm = larger;

    while (lcm % firstNumber != 0 || lcm % secondNumber != 0) {
        ++lcm;
    }

    cout << "LCM = " << lcm << '\n';
    return 0;
}
