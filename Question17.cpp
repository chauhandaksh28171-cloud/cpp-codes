// Question 17: Remove all vowels from a string using string functions

#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char text[300], result[300];
    int j = 0;

    cout << "Enter a string: ";
    cin.getline(text, 300);

    for (int i = 0; i < strlen(text); i++) {
        char ch = text[i];
        bool vowel = (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
                      ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U');
        if (!vowel)
            result[j++] = ch;
    }
    result[j] = '\0';

    cout << "String without vowels = " << result << '\n';
    return 0;
}
