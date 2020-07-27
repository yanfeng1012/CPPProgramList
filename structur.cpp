#include <iostream>
#include <string>
#include <cstring>

using namespace std;

struct intflatable {
    string name;
    float volume;
    double price;
};

int main() {
    intflatable guest = {
            "Glorious Gloria",
            1.88,
            29.99
    };

    intflatable pal = {
            "Audacious Arthur",
            3.12,
            32.99
    };

    cout << "Expand your guest list with " << guest.name;
    cout << " and " << pal.name << "!\n";

    cout << "You can have both for $";
    cout << guest.price + pal.price << "!\n ";

    return 0;
}

