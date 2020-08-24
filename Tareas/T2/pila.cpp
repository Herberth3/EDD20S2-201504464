#include "pila.h"

pila::pila(/* args */)
{
    this->cima = NULL;
}

void pila::push(nodo *nuevo)
{
    if (this->cima == NULL)
    {
        this->cima = nuevo;
        return;
    }
    nuevo->siguiente = this->cima;
    this->cima = nuevo;
}

nodo *pila::pop()
{
    nodo *aux = this->cima;

    if (cima != NULL)
    {
        cima = cima->siguiente;
        return aux;
    }
    cout << "Pila vacia" << endl;
    return NULL;
}
pila::~pila()
{
}