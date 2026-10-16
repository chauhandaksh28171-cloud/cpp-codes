// Menu-driven calculator demonstrating default in switch.
#include <iostream>
using namespace std;

int main() {
    double firstNumber, secondNumber;
    int choice;

    cout << "Enter two numbers: ";
    cin >> firstNumber >> secondNumber;

    cout << "Calculator Menu\n";
    cout << "1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Result = " << firstNumber + secondNumber << '\n';
            break;
        case 2:
            cout << "Result = " << firstNumber - secondNumber << '\n';
            break;
        case 3:
            cout << "Result = " << firstNumber * secondNumber << '\n';
            break;
        case 4:
            if (secondNumber == 0) {
                cout << "Division by zero is not allowed.\n";
            } else {
                cout << "Result = " << firstNumber / secondNumber << '\n';
            }
            break;
        default:
            cout << "Invalid menu choice.\n";
    }
    return 0;
}
