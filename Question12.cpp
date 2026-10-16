// Generate a Fibonacci series using a while loop.
#include <iostream>
using namespace std;

int main() {
    int terms;
    cout << "How many Fibonacci terms do you want (1-93)? ";
    cin >> terms;

    if (terms < 1 || terms > 93) {
        cout << "Please enter a term count from 1 to 93.\n";
        return 0;
    }

    unsigned long long first = 0, second = 1;
    int count = 0;
    while (count < terms) {
        cout << first << " ";
        unsigned long long next = first + second;
        first = second;
        second = next;
        ++count;
    }
    cout << '\n';
    return 0;
}
