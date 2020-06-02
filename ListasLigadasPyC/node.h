#ifndef NODE_H
#define NODE_H
#include <iostream>


class Node
{
private:
    std::string data;
    Node *next;

public:
    Node(std::string data);
    ~Node();
    void setnext(Node *);
    Node *getnext();
    void setdata(std::string);
    std::string getdata();
//    void insert(std::string);
//    void insertinto(std::string, int);
//    std::string take(int);
//    int search(std::string);
//    int remove(int);
//    void showall();
//    void change(std::string, int);
//    bool empty();
//    void removeall();
//    int size();
//    std::string takefirst();
};

#endif // NODE_H
