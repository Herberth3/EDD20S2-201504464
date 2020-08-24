#ifndef CLONARLISTA_H
#define CLONARLISTA_H
#include "listaSimple.h"
#include "nodo.h"
#include "pila.h"

class clonarLista
{
private:
    /* data */
public:
    clonarLista();
    listaSimple* clonar(listaSimple);
    ~clonarLista();
};

#endif // CLONARLISTA_H