#ifndef STACK_H
#define STACK_H
#include "list.h"

class stack : public list
{
public:
    stack();
    ~stack();
    void insert(std::string); // push
    void pop();
    std::string top();
};

#endif // STACK_H
