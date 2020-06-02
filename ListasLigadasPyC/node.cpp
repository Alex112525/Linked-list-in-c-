#include "node.h"

Node::Node(std::string data)
{
    this->data = data;
    this->next = NULL;
}

Node::~Node()
{
}

void Node::setnext(Node *node)
{
    this->next = node;
}

Node *Node::getnext()
{
    return this->next;
}

void Node::setdata(std::string data)
{
    this->data = data;
}

std::string Node::getdata()
{
    return this->data;
}

//void Node::insert(std::string data)
//{
//    Node *aux = this;
//    Node *node = new Node(data);
//    while(aux->next != NULL)
//    {
//        aux = aux->next;
//    }
//    aux->next = node;
//}

//void Node::insertinto(std::string data, int pos)
//{
//    Node *aux = this;
//    Node *node = new Node(data);
//    for(int i=1; i<pos-1; i++)
//    {
//        if(aux->next != NULL)
//        {
//            aux = aux->next;
//        }
//    }
//    if(aux->next != NULL)
//    {
//        Node *nnext = aux->next;
//        aux->next = node;
//        node->next = nnext;
//    }
//}

//std::string Node::take(int pos)
//{
//    Node *aux = this;
//    for(int i=1; i<pos; i++)
//    {
//        aux = aux->next;
//    }
//    return aux->data;
//}

//int Node::search(std::string name)
//{
//    Node *aux = this;
//    const char *namec = name.c_str();
//    int i = 1;
//    while(aux->next != NULL)
//    {
//        const char *datac = aux->data.c_str();
//        if(strcmp(datac, namec) == 0)
//        {
//            return i;
//        }
//        aux = aux->next;
//        i++;
//    }
//    return -1;
//}

//int Node::remove(int pos)
//{
//    Node *aux = this;
//    for(int i=1; i<pos-1; i++)
//    {
//        if(aux->next != NULL)
//        {
//            aux = aux->next;
//        }
//    }
//    if(aux->next != NULL)
//    {
//        Node *rem = aux->next;
//        aux->next = rem->next;
//        delete rem;
//        return 1;
//    }else
//    {
//        return -1;
//    }
//}

//void Node::showall()
//{
//    Node *aux = this;
//    do
//    {
//        std::cout << aux->data << std::endl;
//        aux = aux->next;
//    }while(aux != NULL);
//}

//void Node::change(std::string data, int pos)
//{
//    Node *aux = this;
//    for(int i=1; i<pos; i++)
//    {
//        aux = aux->next;
//    }
//    aux->data = data;
//}

//bool Node::empty()
//{
//    if(this->next == NULL)
//    {
//        return true;
//    }else
//    {
//        return false;
//    }
//}

//void Node::removeall()
//{
//    Node *aux = this->next;
//    this->next = NULL;
//    Node *del;
//    while(aux->next != NULL)
//    {
//        del = aux;
//        aux = aux->next;
//        delete (del);
//    }
//}

//int Node::size()
//{
//    Node *aux = this;
//    int count = 1;
//    while(aux->next != NULL)
//    {
//        aux = aux->next;
//        count++;
//    }
//    return count;
//}

//std::string Node::takefirst()
//{
//    return this->data;
//}

