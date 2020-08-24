#include <iostream>
#include "listaSimple.h"

//using namespace std;

int main()
{
    listaSimple* lista = new listaSimple();
    cout << "hola mundo"<<endl;
    lista->insertarEstudiante("Herberth",201504464);
    lista->insertarEstudiante("Julio", 201804432);
    lista->insertarEstudiante("Ana", 199247435);
    cout << lista->buscarEstudiante(201804432) << endl;
    lista->eliminarEstudiante(199247435);

    lista->insertarEstudiante("Carla",200046552);
    lista->insertarEstudiante("Julia", 201802525);
    lista->insertarEstudiante("Ester", 200145858);

    lista->eliminarEstudiante(201802525);

    cout << lista->buscarEstudiante(201802525) << endl;

    return 0;
}