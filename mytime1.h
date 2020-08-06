//
// Created by yanfeng on 2020-08-06.
//

#ifndef FIRSTCPP_MYTIME1_H
#define FIRSTCPP_MYTIME1_H

class Time {
    int hours;
    int minutes;
public:

    Time();

    Time(int h, int m = 0);

    void AddMin(int m);

    void AddHr(int h);

    void Reset(int h = 0, int m = 0);

    Time operator+(const Time &t) const;

    void Show() const;

};

#endif //FIRSTCPP_MYTIME1_H
