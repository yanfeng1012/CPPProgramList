#include <iostream>

using namespace std;

int main() {
    float hats, headers;
    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout << "enter a number : ";
    cin >> hats;
    cout << "enter anthor number :";
    cin >> headers;

    cout << "hats = " << hats << ";heads = " << headers << endl;
    cout << "hats + headers " << hats + headers << endl;
    cout << "hats - headers " << hats - headers << endl;
    cout << "hats * headers " << hats * headers << endl;
    cout << "hats / headers " << hats / headers << endl;
    return 0;
}
