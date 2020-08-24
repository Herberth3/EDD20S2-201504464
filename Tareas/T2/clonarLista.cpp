#include "clonarLista.h"

clonarLista::clonarLista()
{
}

listaSimple* clonarLista::clonar(listaSimple lista)
{
    nodo* nuevo = lista.getCabeza();
    nodo* aux;
    pila* p = new pila();
    listaSimple* nuevaLista = new listaSimple();

    while (nuevo != NULL)
    {
        p->push(nuevo);
        nuevo = nuevo->siguiente;
    }

    aux = p->pop();
    while (aux != NULL)
    {
        nuevaLista->insertarEstudiante(aux->nombre, aux->carnet);
        aux = p->pop();
    }
    
    return nuevaLista;

}

clonarLista::~clonarLista()
{
}