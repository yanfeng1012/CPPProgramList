#include <iostream>

using namespace std;

int main() {
    int yams[3];
    yams[0] = 7;
    yams[1] = 8;
    yams[2] = 6;

    int yamcosts[3] = {20, 30, 5}; // 数组声明 初始化

    cout << "total yams = ";
    cout << yams[0] + yams[1] + yams[2] << endl;

    cout << "the package with " << yams[1] << " yams costs ";
    cout << yamcosts[1] << " cents per yam.\n";

    int total = yams[0] * yamcosts[0] + yams[1] * yamcosts[1];
    cout << total << endl;

    return 0;
}