#include "nodo.h"
//#include <fstream>

nodo::nodo(string nombreE, int dato)
{
    this->nombre = nombreE;
    this->carnet = dato;
    this->siguiente = NULL;
}

nodo::~nodo()
{
}