#ifndef NODO_H
#define NODO_H
#include <string>
#include "iostream"

using namespace std;

class nodo
{
private:
    /* data */
public:
    string nombre;
    int carnet;
    nodo* siguiente;

    nodo(string, int);
    ~nodo();
};

#endif // NODO_H