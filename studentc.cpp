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

