//
// Created by yanfeng on 2020-08-06.
//

#ifndef FIRSTCPP_STOCK20_H
#define FIRSTCPP_STOCK20_H

#include <string>

using namespace std;

class Stock {
    string company;
    int shares;
    double share_val;
    double total_val;

    void set_tot() { total_val = shares * share_val; };
public:
    Stock();

    Stock(const string &co, long n = 0, double pr = 0.0);

    ~Stock();

    void buy(long num, double price);

    void sell(long num, double price);

    void update(double price);

    void show() const;

    const Stock &topval(const Stock &s) const;
};

#endif //FIRSTCPP_STOCK20_H
