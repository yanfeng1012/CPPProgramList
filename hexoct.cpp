#include <iostream>

using namespace std;

int main() {
    int chest = 42;
    int waist = 0x42;
    int inseam = 042;

    cout << "chest is : " << chest << endl;
    cout << "waist is : " << waist << endl;
    cout << "inseam is : " << inseam << endl;

    cout << "chest is : " << chest << endl;

    cout << hex;
    cout << "waist is : " << waist << endl;

    cout << oct;
    cout << "inseam is : " << inseam << endl;
    return 0;
}