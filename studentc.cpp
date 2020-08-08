//
// Created by yanfeng on 2020-08-08.
//

#include "studentc.h"

using namespace std;

double Studentc::Average() const {
    if (scores.size() > 0) {
        return scores.sum() / scores.size();
    } else {
        return 0;
    }
}

const string &Studentc::Name() const {
    return name;
}

double &Studentc::operator[](int i) {
    return scores[i];
}

double Studentc::operator[](int i) const {
    return scores[i];
}

ostream &Studentc::arr_out(ostream &os) const {
    int i;
    int lim = scores.size();
    if (lim > 0) {
        for (i = 0; i < lim; i++) {
            os << scores[i] << " ";
            if (i % 5 == 4) {
                os << endl;
            }
            if (i % 5 != 0) {
                os << endl;
            }
        }
    } else {
        os << " empty array";
    }
    return os;
}

istream &operator>>(istream &is, Studentc &stu) {
    is >> stu.name;
    return is;
}

istream &getline(istream &is, Studentc &stu) {
    getline(is, stu.name);
    return is;
}

ostream &operator<<(ostream &os, const Studentc &stu) {
    os << "Scores for " << stu.name << ":\n";
    stu.arr_out(os);
    return os;
}