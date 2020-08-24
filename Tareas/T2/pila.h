#ifndef PILA_H
#define PILA_H
#include "nodo.h"

class pila
{
private:
    /* data */
public:
    pila(/* args */);
    void push(nodo*);
    nodo* pop();
    ~pila();

protected:
    nodo* cima;
};

#endif //PILA_H