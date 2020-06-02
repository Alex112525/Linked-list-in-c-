#include <iostream>
#include <stdio.h>
#include "list.h"
#include "stack.h"
#include "queue.h"

using namespace std;

void parser(string);
void customer();

int main()
{
    parser("([{}()]{})");

    customer();
}

void parser(string data)
{
    stack *pila = new stack();
    bool b = false;
    int i = 0;
    while(data[i] != '\0' && !b)
    {
        switch(data[i])
        {
        case '(':
            pila->insert("(");
            break;
        case ')':
            if(pila->top() == "(")
            {
                pila->pop();
            }else
            {
                b = true;
            }
            break;
        case '{':
            pila->insert("{");
            break;
        case '}':
            if(pila->top() == "{")
            {
                pila->pop();
            }else
            {
                b = true;
            }
            break;
        case '[':
            pila->insert("[");
            break;
        case ']':
            if(pila->top() == "[")
            {
                pila->pop();
            }else
            {
                b = true;
            }
            break;
        default:
            break;
        }
        i++;
    }
    if(pila->empty())
    {
        cout << "Sintaxis correcta" << endl;
    }else
    {
        cout << "Sintaxis incorrecta" << endl;
    }
}

void customer()
{
    string name;
    queue *cola = new queue();
    int opc = 0;

    while(opc != 3)
    {
        cout << " 1.- Ingresar cliente en espera. \n 2.- Siguiente cliente. \n 3.- Salir." << endl;
        cin >> opc;
        switch(opc)
        {
        case 1:
            cout << "Bienvenido a atención a cliente, por favor, diga su nombre y lo pondremos en la cola de espera: " << endl;
            cin >> name;
            cola->insert(name);
            break;
        case 2:
            if(!cola->empty())
            {
                cout << cola->top() << " favor de pasar a ventanilla." << endl;
                cola->pull();
            }else
            {
                cout << "Ya no hay personas en espera." << endl;
            }
            break;
        case 3:
            cout << "Bye" << endl;
            break;
        default:
            cout << "Opcion no valida" << endl;
        }
    }
}

