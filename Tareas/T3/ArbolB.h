#ifndef ARBOLB_H
#define ARBOLB_H
#include "Pagina.h"

class ArbolB
{
public:
    ArbolB()
    {
        orden = 0;
        raiz = 0;
    }
    ArbolB(int m)
    {
        orden = m;
        raiz = 0;
    }
    bool arbolBvacio()
    {
        return raiz == 0;
    }
    Pagina* Oraiz(){ return raiz;} //Obtener la raiz del árbol
    void Praiz( Pagina * r){ raiz = r;} //Poner nueva raiz del árbol
    int Oorden(){ return orden;}
    void Porden(int ord){ orden = ord;}
    void crear() { orden = 0; raiz = 0;}
    Pagina* buscar(int cl, int &n);
    void insertar(int cl);
    void eliminar(int cl);
    void escribir();
    void escribir( Pagina * r, int h);
    void listarCreciente();
    virtual ~ArbolB();

protected:
    int orden;
    Pagina* raiz;

private:
    bool buscarNodo(Pagina* actual, int cl, int &k);
    Pagina* buscar(Pagina* actual, int cl, int &m);
    Pagina* insertar(Pagina* raiz, int cl);
    bool empujar(Pagina* actual, int cl, int &mediana, Pagina *& nuevo);
    void meterPagina(Pagina* actual, int cl, Pagina *ramaDr, int k);
    void dividirNodo(Pagina* actual, int &mediana, Pagina * &nuevo, int pos);
    void inOrden(Pagina *r);
};

#endif // ARBOLB_H
