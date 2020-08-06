#include <iostream>

using namespace std;

template<typename T>
void Swap(T &a, T &b);

int main() {
    int i = 10;
    int j = 10;
    cout << "i,j = " << i << ", " << j << ".\n";
    cout<<"Using compiler "
}

template<typename T>
void Swap(T &a, T &b) {
    T temp;
    temp = a;
    a = b;
    b = temp;
}