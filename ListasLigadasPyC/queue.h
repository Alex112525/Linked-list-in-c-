#ifndef QUEUE_H
#define QUEUE_H
#include "list.h"


class queue : public list
{
public:
    queue();
    ~queue();
    void pull();
    std::string top();
};

#endif // QUEUE_H
