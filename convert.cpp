#include <iostream>

using namespace std;

int stonetolb(int n);

int main() {
    int stone;
    cout << "Enter the weight in stone : ";
    cin >> stone;
    int pounds = stonetolb(stone);
    cout << stone << "stone = ";
    cout << pounds << "pounds. " << endl;
    return 0;
}

int stonetolb(int n) {
    return n * 14;
}