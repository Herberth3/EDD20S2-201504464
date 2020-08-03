#include <iostream>
#include <string>

//CLASES CREADAS E INCLUIDAS
#include "ListaSimple.h"

using namespace std;

int main()
{

    ListaSimple* lista = new ListaSimple();

    lista->insertarEstudiante("Herberth",201504464);
    lista->insertarEstudiante("Julio", 201804432);
    lista->insertarEstudiante("Ana", 199247435);

    lista->buscarEstudiante(201804432);
    lista->eliminarEstudiante(199247435);

    lista->insertarEstudiante("Carla",200046552);
    lista->insertarEstudiante("Julia", 201802525);
    lista->insertarEstudiante("Ester", 200145858);

    lista->eliminarEstudiante(201802525);
    

    return 0;
}
