#include <iostream>
#include <string>
#include <cstring>

using namespace std;

struct inflatable {
    string name;
    float volume;
    double price;
};

int main() {
    inflatable guest[2] = {
            {"bambi",     0.5,  21.99},
            {"Audacious", 2000, 565.99}
    };

    cout << "Expand your guest list with " << guest[0].name;
    cout << " and " << guest[1].name << "!\n";

    cout << "You can have both for $";
    cout << guest[0].price + guest[1].price << "!\n ";

    return 0;
}

