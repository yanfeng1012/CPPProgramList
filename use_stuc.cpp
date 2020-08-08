#include <iostream>
#include "studentc.h"

using namespace std;
const int puplis = 3;
const int quizzes = 5;

void set(Studentc &sa, int n);

int main() {
    Studentc ada[puplis] = {Studentc(quizzes), Studentc(quizzes), Studentc(quizzes)};

    int i;
    for (i = 0; i < puplis; ++i) {
        set(ada[i], quizzes);
    }
    cout << "\nStudent List:\n";
    for (i = 0; i < puplis; ++i) {
        cout << ada[i].Name() << endl;
    }
    cout << "\nResults:";
    for (i = 0; i < puplis; ++i) {
        cout << endl << ada[i];
        cout << "acerage: " << ada[i].Average() << endl;
    }
    cout << "Done.\n";
}

void set(Studentc &sa, int n) {
    cout << "Please enter the student's name: ";
    getline(cin, sa);
    cout << "Please enter " << n << " quiz scores:\n";
    for (int i = 0; i < n; i++) {
        cin >> sa[i];
    }
    while (cin.get() != '\n') {
        continue;
    }
}