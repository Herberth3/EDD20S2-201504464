#include "listaSimple.h"

listaSimple::listaSimple()
{
    this->cabeza = NULL;
}

void listaSimple::insertarEstudiante(string nombre, int carnet)
{
    nodo* nuevo = new nodo(nombre, carnet);

    if(this->cabeza == NULL)
    {
        this->cabeza = nuevo;
        return;
    }
    nuevo->siguiente = this->cabeza;
    this->cabeza = nuevo;

}

bool listaSimple::buscarEstudiante(int carnet)
{
    nodo* actual = this->cabeza;

    if(actual != NULL)
    {
        while (actual != NULL)
        {
            if(actual->carnet == carnet)
            {
                return true;
            }
            actual = actual->siguiente;
        }
    }
    return false;
}

void listaSimple::eliminarEstudiante(int carnet)
{
    bool existe = buscarEstudiante(carnet);
    nodo* actual,* anterior = this->cabeza;

    if(existe)
    {
        while (true)
        {
            if (actual->carnet == carnet)
            {
                if(actual == this->cabeza)
                {
                    if(actual->siguiente != NULL)
                    {
                        this->cabeza = actual->siguiente;
                    }else
                    {
                        this->cabeza = NULL;
                    }
                }
                else
                {
                    anterior->siguiente = actual->siguiente;
                }
                break;
            }
            anterior = actual;
            actual = actual->siguiente;
        }
        cout << "Estudiante eliminado"<< endl;
    }
    else
    {
        cout <<"El estudiante no existe o la lista esta vacia"<< endl;
    }
    
}

listaSimple::~listaSimple()
{
}