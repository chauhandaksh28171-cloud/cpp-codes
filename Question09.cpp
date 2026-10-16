// Question 9: Arrange an array of strings alphabetically using strcmp()

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    const int MAX_NAMES = 20;
    char names[MAX_NAMES][100], temp[100];
    int n;

    cout << "How many strings (1-" << MAX_NAMES << ")? ";
    cin >> n;
    if (n < 1 || n > MAX_NAMES) {
        cout << "Invalid number of strings.\n";
        return 1;
    }

    cin.ignore(10000, '\n');
    for (int i = 0; i < n; i++) {
        cout << "Enter string " << i + 1 << ": ";
        cin.getline(names[i], 100);
    }

    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (strcmp(names[j], names[j + 1]) > 0) {
                strcpy(temp, names[j]);
                strcpy(names[j], names[j + 1]);
                strcpy(names[j + 1], temp);
            }
        }
    }

    cout << "Strings in alphabetical order:\n";
    for (int i = 0; i < n; i++)
        cout << names[i] << '\n';

    return 0;
}
