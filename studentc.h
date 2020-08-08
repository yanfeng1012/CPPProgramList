//
// Created by yanfeng on 2020-08-08.
//

#ifndef FIRSTCPP_STUDENTC_H
#define FIRSTCPP_STUDENTC_H

#include <iostream>
#include <string>
#include <valarray>

using namespace std;

class Studentc {
private:
    typedef valarray<double> ArrayDb;
    string name;
    ArrayDb scores;

    ostream &arr_out(ostream &os) const;

public:
    Studentc() : name("Null Student"), scores() {}//成员初始化语法

    explicit Studentc(const string &s) : name(s), scores() {}

    explicit Studentc(int n) : name("Nully"), scores(n) {}

    Studentc(const string &s, int n) : name(s), scores(n) {}

    Studentc(const char *str, const double *pd, int n) : name(str), scores(pd, n) {}

    ~Studentc() {}

    double Average() const;

    const string &Name() const;

    double &operator[](int i) const;

    double &operator[](int i) const;

    friend istream &operator>>(istream &is, Studentc &stu);

    friend istream &getline(istream &is, Studentc &stu);

    friend ostream &operator<<(ostream &os, const Studentc &stu);
};


#endif //FIRSTCPP_STUDENTC_H
