// Search for a target in a user-entered sequence; stop when found using break.
#include <iostream>
using namespace std;

int main() {
    int count, target;
    cout << "How many numbers are in the sequence? ";
    cin >> count;

    if (count <= 0) {
        cout << "Please enter a positive sequence length.\n";
        return 0;
    }

    cout << "Enter the target number: ";
    cin >> target;

    bool found = false;
    for (int index = 1; index <= count; ++index) {
        int value;
        cout << "Enter number " << index << ": ";
        cin >> value;

        if (value == target) {
            found = true;
            cout << "Number found at position " << index << ".\n";
            break;
        }
    }

    if (!found) {
        cout << "Number not found in the sequence.\n";
    }
    return 0;
}
