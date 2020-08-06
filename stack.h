//
// Created by yanfeng on 2020-08-06.
//

#ifndef FIRSTCPP_STACK_H
#define FIRSTCPP_STACK_H
typedef unsigned long Item;// typedef 为已有的数据类型重新命名
class Stack {
    enum {
        MAX = 10
    };
    Item items[MAX];
    int top;
public:
    Stack();

    bool isempty() const;

    bool isfull() const;

    bool push(const Item &item);

    bool pop(Item &item);
};

#endif //FIRSTCPP_STACK_H
