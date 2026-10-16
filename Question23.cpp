// Display all Harshad numbers between 1 and 100.
#include <iostream>
using namespace std;

int main() {
    for (int number = 1; number <= 100; ++number) {
        int temporary = number;
        int digitSum = 0;

        while (temporary > 0) {
            digitSum += temporary % 10;
            temporary /= 10;
        }

        if (number % digitSum == 0) {
            cout << number << " ";
        }
    }
    cout << '\n';
    return 0;
}
