#include <iostream>
#include <cctype>
#include "stack.h"

using namespace std;

int main() {
    Stack stack;
    char ch;
    unsigned long po;

    cout << "Please enter A to add a purchase order.\n" << "P to process a PO,or Q to quit.\n";

    while (cin >> ch && toupper(ch) != 'Q') {

        while (cin.get() != '\n') continue;

        if (!isalpha(ch)) { //isalpha():判断字符ch是否为英文字母，若为英文字母，返回非0（小写字母为2，大写字母为1）。若不是字母，返回0。
            cout << "\a";
            continue;
        }

        switch (ch) {
            case 'A':
            case 'a':
                cout << "Enter a PO number to add: ";
                cin >> po;
                if (stack.isfull()) {
                    cout << "stack already full\n";
                } else {
                    stack.push(po);
                }
                break;
            case 'P':
            case 'p':
                if (stack.isempty()) {
                    cout << "stack already empty\n";
                } else {
                    stack.pop(po);
                    cout << "PO #" << po << " popped\n";
                }
                break;
        }

        cout << "Please enter A to add a purchase order,\n" << "P to process a PO, or Q to quit.\n";
    }
    cout << "Bye\n";

    return 0;
}