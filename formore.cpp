#include <iostream>

using namespace std;
const int ArSize = 16;

int main() {
    long long factorials[ArSize];
    factorials[1] = factorials[0] = 1LL;
    for (int i = 2; i < ArSize; i++)
        factorials[i] = i * factorials[i - 1];

    for (int j = 0; j < ArSize; j++)
        cout << j << " == " << factorials[j] << endl;

    return 0;
}
