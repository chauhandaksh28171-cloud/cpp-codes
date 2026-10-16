// Demonstrate the default case when no switch case matches.
#include <iostream>
using namespace std;

int main() {
    int choice;
    cout << "Enter a number from 1 to 3: ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "You selected One.\n";
            break;
        case 2:
            cout << "You selected Two.\n";
            break;
        case 3:
            cout << "You selected Three.\n";
            break;
        default:
            cout << "No matching case exists.\n";
    }
    return 0;
}
