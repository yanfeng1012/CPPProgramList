#include <iostream>

using namespace std;

int main() {

    cout.setf(ios_base::fixed, ios_base::floatfield);

    float tree = 3;
    int guess(3.9832);
    int debt = 7.2e12;

    cout << " tree = " << tree << endl;
    cout << " guess = " << guess << endl;
    cout << " dept = " << debt << endl;
    return 0;
}