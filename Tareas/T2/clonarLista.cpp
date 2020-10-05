#include "clonarLista.h"

clonarLista::clonarLista()
{
}

listaSimple* clonarLista::clonar(listaSimple lista)
{
    nodo* nuevo = lista.getCabeza(); //Constante = 1
    nodo* aux; //Constante = 1
    pila* p = new pila(); //Constante = 1
    listaSimple* nuevaLista = new listaSimple();//Constante = 1

    while (nuevo != NULL)//bucle hasta n
    {
        p->push(nuevo);
        nuevo = nuevo->siguiente;
    }

    aux = p->pop();
    while (aux != NULL)//bucle hasta n
    {
        nuevaLista->insertarEstudiante(aux->nombre, aux->carnet);
        aux = p->pop();
    }
    
    return nuevaLista;

}

//T(n) = 1+1+1+1+ n + n
//f(n) = 2n
//O(n)

clonarLista::~clonarLista()
{
}
