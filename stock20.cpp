#include <iostream>
#include "stock20.h"

using namespace std;

Stock::Stock() {
    company = "no name";
    shares = 0;
    share_val = 0.0;
    total_val = 0.0;
}

Stock::Stock(const string &co, long n, double pr) {
    company = co;

    if (n < 0) {
        cout << "Number of shares cant't be negative; " << company << " shares set to 0.\n";
        shares = 0;
    } else {
        shares = n;
    }
    share_val = pr;
    set_tot();
}

Stock::~Stock() {}

void Stock::buy(long num, double price) {
    if (num < 0) {
        cout << "Number of shares purchased can't be negative. Transaction is aborted.\n";
    } else {
        shares += num;
        share_val = price;
        set_tot();
    }
}

void Stock::sell(long num, double price) {
    if (num < 0) {
        cout << "Number of shares sold can't be negative. Transaction is aborted.\n";
    } else {
        shares -= num;
        share_val = price;
        set_tot();
    }
}

void Stock::update(double price) {
    share_val = price;
    set_tot();
}

void Stock::show() const {
    cout << "Company: " << company << " shares: " << shares << ".\n" << " share Price:$" << share_val
         << " Total Worth:$" << total_val << '\n';
}

const Stock &Stock::topval(const Stock &s) const { // 函数后const只能用于成员函数
    if (s.shares > total_val) {
        return s;
    } else {
        return *this;
    }
}