#include <iostream>

using namespace std;

int main() {
    char ch;
    int spaces, total = 0;
    cin.get(ch);
    while (ch != '.') {
        if (ch == ' ') {
            ++spaces;
        } else {
            cout << ++ch;
        }
        ++total;
        cin.get(ch);
    }

    cout << spaces << " spaces, " << total;
    cout << " characters total in sentence\n";
    return 0;
}