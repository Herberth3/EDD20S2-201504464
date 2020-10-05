#include "Pagina.h"

Pagina::Pagina(int orden)
{
    m = orden;
    claves = new int[orden];
    ramas = new PPagina[orden];
    for (int k = 0; k <= orden; k++)
        ramas[k] = 0;
}

Pagina::~Pagina()
{
    //dtor
}
