#ifndef LIST_H
#define LIST_H
#include "node.h"

class list
{
protected:
    Node *head = nullptr;
    Node *last = nullptr;
    int length = 0;
public:
    list();
    ~list();
    void insert(std::string);
    void insertinto(std::string, int);
    std::string take(int);
    int search(std::string);
    int remove(int);
    void showall();
    void change(std::string, int);
    bool empty();
    void removeall();
    int size();
    std::string takefirst();
};

#endif // LIST_H
