#include "queue.h"

queue::queue()
{
}

queue::~queue()
{
}

void queue::pull()
{
    if(head != nullptr)
    {
        Node *rem = this->head;
        this->head = rem->getnext();
        delete rem;
    }
}

std::string queue::top()
{
    if(head != nullptr) return this->head->getdata();
    else return "";
}

