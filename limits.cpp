#include <iostream>
#include <climits>

using namespace std;

int main() {
    int int_max = INT_MAX;
    short n_short = SHRT_MAX;
    long n_long = LONG_MAX;
    long long n_llong = LONG_LONG_MAX;

    cout << "int max is : " << sizeof(int_max) << endl;
    cout << "short max is : " << n_short << endl;
    cout << "long max is : " << n_long << endl;
    cout << "long long max is : " << n_llong << endl;
    cout << "char bit max is : " << CHAR_BIT << endl;
}