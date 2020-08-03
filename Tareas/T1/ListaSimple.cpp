#include "ListaSimple.h"
#include <fstream>

ListaSimple::ListaSimple()
{
    //ctor
    cabeza = 0;
    ultimo = 0;
}

void ListaSimple::insertarEstudiante(string nombre, int carnet)
{
    Nodo_LS* nuevo = new Nodo_LS(nombre, carnet);
    Nodo_LS* aux = this->ultimo;

    if (this->cabeza == 0)
    {
        this->cabeza = nuevo;
        this->ultimo = nuevo;
    }
    else
    {
        this->ultimo->siguiente = nuevo;
        this->ultimo = nuevo;
    }
}

void ListaSimple::buscarEstudiante(int carnet)
{
    bool bandera = false;

    Nodo_LS* actual = this->cabeza;

    if(actual != 0)
    {
        while(bandera == false && actual != 0)
        {
            if(actual->carnet == carnet)
            {
                bandera = true;
            }
            else
            {
                actual = actual->siguiente;
            }
        }

        if (bandera)
        {
            cout<< "Estudiante: " <<actual->nombre << ", Carnet: " << carnet<<" Si ha sido encontrado en la lista \n";
        }
        else
        {
            cout<< "Estudiante: " <<carnet<<" No ha sido encontrado en la lista \n";
        }
    }
    else
    {
        cout<<"Lista vacia"<<endl;
    }
}

void ListaSimple::eliminarEstudiante(int carnet)
{
    bool bandera = false;
    Nodo_LS* actual, *anterior;
    actual = this->cabeza;

    if(actual!= 0)
    {
        while(bandera == false && actual != 0)
        {
            if(actual->carnet == carnet)
            {
                bandera = true;
                if(actual == this->cabeza)
                {
                    if(actual->siguiente != 0)
                    {
                        this->cabeza = actual->siguiente;
                    }else
                    {
                        this->cabeza = 0;
                    }
                }else if(actual == this->ultimo)
                {
                    this->ultimo = anterior;
                    this->ultimo->siguiente = 0;
                }else
                {
                    anterior->siguiente = actual->siguiente;
                }
            }
            else
            {
                anterior = actual;
                actual = actual->siguiente;
            }
        }

        if (bandera)
        {
            cout<< "Estudiante: " <<actual->nombre << ", Carnet: " << carnet<<" Ha sido elimiado \n";
        }
        else
        {
            cout<< "Estudiante: " <<carnet<<" No ha sido encontrado en la lista \n";
        }
    }
    else
        cout<<" Lista vacia..!";
}

ListaSimple::~ListaSimple()
{
    //dtor
}
