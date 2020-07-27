#include <iostream>

#define  ZERO  0

#include <climits>

using namespace std;

int main() {
    short sam = SHRT_MAX;
    unsigned short sem = sam;
    cout << "short max is : " << sam << endl;
    cout << "unsigned short max  is : " << sem << endl;

//    sam = ZERO;
//    sem = ZERO;

    cout << "short max + 1 is : " << sam + 1 << endl;
    cout << "unsigned short max + 1 is : " << sem + 1 << endl;
    return 0;
}