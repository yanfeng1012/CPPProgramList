#include <iostream>

using namespace std;

int main() {
    cout.setf(ios_base::fixed, ios_base::floatfield);
    float tub = 10.0 / 3.0;
    double mut = 10.0 / 3.0;
    const float million = 1.0e6;

    cout << "tub = " << tub << endl;
    cout << "a million tubs " << tub * million << endl;
    cout << "ten million tubs " << tub * million * 10 << endl;
    cout << "mut = " << mut << endl;
    cout << "a million mut " << tub * million << endl;
    cout << "ten million mut " << tub * million * 10 << endl;

    return 0;
}