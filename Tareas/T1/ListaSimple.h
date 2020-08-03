#ifndef LISTASIMPLE_H
#define LISTASIMPLE_H

//LIBRERIAS PARA QUE FUNCIONEN LOS STD
#include "iostream"
using namespace std;

class ListaSimple
{
public:
    ListaSimple();

    void insertarEstudiante(string nombre, int carnet);
    void buscarEstudiante(int carnet);
    void eliminarEstudiante(int carnet);

    virtual ~ListaSimple();

protected:
    //-------------CLASE NODO_LS-------------
    class Nodo_LS
    {
    public:
        string nombre;
        int carnet;
        Nodo_LS* siguiente;

        Nodo_LS(string nombreE, int dato)
        {
            carnet = dato;
            nombre = nombreE;
            siguiente = 0;
        };

    };
    //-------------FIN CLASE NODO_LS---------

    Nodo_LS* cabeza;
    Nodo_LS* ultimo;
private:
};

#endif // LISTASIMPLE_H
