#include "stack.h"
#include "node.h"

stack::stack()
{

}

void stack::insert(std::string data)
{
    Node *node = new Node(data);
    if(this->head == nullptr)
    {
        this->head = node;
    }else
    {
        node->setnext(this->head);
        this->head = node;
    }
    this->length++;
}

void stack::pop()
{
    Node *rem = this->head;
    this->head = rem->getnext();
    delete rem;
}

std::string stack::top()
{
    return this->head->getdata();
}
