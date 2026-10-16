// Question 19: Join multiple strings into one sentence using strcat()

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char sentence[600] = "";
    char part[150];
    int n;

    cout << "How many parts do you want to join (1-5)? ";
    cin >> n;
    if (n < 1 || n > 5) {
        cout << "Invalid number of parts.\n";
        return 1;
    }

    cin.ignore(10000, '\n');
    for (int i = 0; i < n; i++) {
        cout << "Enter part " << i + 1 << ": ";
        cin.getline(part, 150);

        if (i > 0)
            strcat(sentence, " ");
        strcat(sentence, part);
    }

    cout << "Complete sentence = " << sentence << '\n';
    return 0;
}
