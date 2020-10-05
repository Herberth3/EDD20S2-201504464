#include <iostream>

#include "ArbolB.h"

using namespace std;

int main()
{
    ArbolB* arbol = new ArbolB(5);
    arbol->insertar(6);
    arbol->insertar(11);
    arbol->insertar(5);
    arbol->insertar(4);
    arbol->insertar(8);arbol->insertar(9);
    arbol->insertar(12);arbol->insertar(21);
    arbol->insertar(14);arbol->insertar(10);
    arbol->insertar(19);arbol->insertar(28);
    arbol->insertar(3);arbol->insertar(17);
    arbol->insertar(32);arbol->insertar(15);
    arbol->insertar(16);arbol->insertar(26);
    arbol->insertar(27);

    arbol->listarCreciente();

    cout << "Hello world!" << endl;
    return 0;
}
