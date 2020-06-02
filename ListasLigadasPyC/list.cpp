#include "list.h"
#include "node.h"
#include <cstring>

list::list()
{
}

list::~list()
{
}

void list::insert(std::string data)
{
    Node *node = new Node(data);
    if(this->head == nullptr)
    {
        this->head = node;
    }else
    {
        this->last->setnext(node);
    }
    this->last = node;
    this->length++;
}

void list::insertinto(std::string data, int pos)
{
    if(pos < this->length && pos > 0)
    {
        Node *node = new Node(data);
        Node *aux = this->head;
        for(int i=0; i<pos-1; i++)
        {
            aux = aux->getnext();
        }
        Node* nnext = aux->getnext();
        aux->setnext(node);
        node->setnext(nnext);
    }else
    {
        std::cout << "Posicion no valida";
    }
    this->length++;
}

std::string list::take(int pos)
{
    if(pos < this->length && pos > 0)
    {
        Node *aux = this->head;
        for(int i=0; i<pos-1; i++)
        {
            aux = aux->getnext();
        }
        return aux->getdata();
    }else
    {
        return "posicion no valida";
    }
}

int list::search(std::string data)
{
    Node *aux = this->head;
    const char *datac = data.c_str();

    int i = 0;
    while(aux != NULL)
    {
        const char *dataauxc = aux->getdata().c_str();
        if(strcmp(datac, dataauxc) == 0)
        {
            return i+1;
        }
        aux = aux->getnext();
        i++;
    }
    return -1;
}

int list::remove(int pos)
{
    if(pos < length && pos > 0)
    {
        Node *aux = this->head;
        for(int i=0; i<pos-2; i++)
        {
            aux = aux->getnext();
        }
        Node *rem = aux->getnext();
        aux->setnext(rem->getnext());
        delete rem;

        this->length--;
        return 1;
    }else
    {
        return -1;
    }
}

void list::showall()
{
    if(this->head == nullptr)
    {
     std::cout << "lista vacia" << std::endl;
    }else
    {
        Node *aux = this->head;
        while (aux != NULL)
        {
              std::cout << aux->getdata() << std::endl;
              aux = aux->getnext();
        }
    }
}

void list::change(std::string data, int pos)
{
    if(pos < this->length && pos > 0)
    {

        Node *aux = this->head;
        for(int i=0; i<pos-1; i++)
        {
            aux = aux->getnext();
        }
        aux->setdata(data);
    }else
    {
        std::cout << "posicion no valida" << std::endl;
    }
}

bool list::empty()
{
    if(this->head == nullptr)
    {
        return true;
    }else
    {
        return false;
    }
}

void list::removeall()
{
    Node *aux = this->head;
    Node *del;
    while(aux->getnext() != NULL)
    {
        del = aux;
        aux = aux->getnext();
        delete del;
    }
    this->head = nullptr;
}

int list::size()
{
    return this->length;
}

std::string list::takefirst()
{
    return this->head->getdata();
}












