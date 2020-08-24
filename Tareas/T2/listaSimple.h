#ifndef LISTASIMPLE_H
#define LISTASIMPLE_H
//#include <string>
//#include <iostream>
#include "nodo.h"

//using namespace std;

class listaSimple
{
private:
    /* data */
public:
    listaSimple();
    void insertarEstudiante(string, int);
    bool buscarEstudiante(int);
    void eliminarEstudiante(int);
    nodo* getCabeza(){return this->cabeza;}

    ~listaSimple();
protected:
    nodo* cabeza;
};

#endif // LISTASIMPLE_H