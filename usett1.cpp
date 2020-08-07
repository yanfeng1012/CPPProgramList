#include <iostream>
#include "tabtenn1.h"

using namespace std;

int main(void) {
    TableTennisPlayer player1("Tara", "Boomdea", false);
    RatedPlayer ratedPlayer(1140, "Mallory", "Duck", true);
    ratedPlayer.Name();

    if (ratedPlayer.HasTable()) {
        cout << ": has a table.\n";
    } else {
        cout << ": hasn't a table.\n";
    }

    player1.Name();
    if (player1.HasTable()) {
        cout << ": has a table";
    } else {
        cout << ": hasn't a table.\n";
    }

    cout << "Name: ";
    ratedPlayer.Name();
    cout << "; Rating: " << ratedPlayer.Rating() << endl;

    RatedPlayer ratedPlayer2(1212, player1);
    cout << "Name: ";
    ratedPlayer2.Name();
    cout << "; Rating: " << ratedPlayer2.Rating() << endl;

    return 0;

}