#include <iostream>

using namespace std;

int main() {
    const int lbs_per_stn = 14;
    int lbs;
    cout << "Enter your weight in pounds : ";
    cin >> lbs;
    int stone = lbs / lbs_per_stn;
    int pounds = lbs % lbs_per_stn;
    cout << lbs << " pounds are " << stone << " stone, " << pounds << " pounds(s).\n";
    return 0;
}
