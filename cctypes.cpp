#include <iostream>
#include <cctype>

using namespace std;

int main() {
    cout << "Enter text for analysis,and type @"
            " to terminate input.\n";
    char ch;
    int whitespace, digits, chars, punct, others = 0;

    cin.get(ch);

    while (ch != '@') {
        if (isalpha(ch)) {
            chars++;
        } else if (isspace(ch)) {
            whitespace++;
        } else if (isdigit(ch)) {
            digits++;
        } else if (ispunct(ch)) {
            punct++;
        } else {
            others++;
        }
    }

    cout << chars << " letters, "
         << whitespace << " whitespace, "
         << digits << " digits, "
         << punct << " punct, "
         << others << " others.\n";

    return 0;
}
