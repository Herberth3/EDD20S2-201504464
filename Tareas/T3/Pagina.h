#ifndef PAGINA_H
#define PAGINA_H

class Pagina;
typedef Pagina* PPagina;

class Pagina
{
    public:
        Pagina(int orden);
        // decide si un nodo está lleno
        bool nodoLLeno(){return (cuenta == m - 1);}
        // decide si una página tiene menos de la mitad de claves
        bool nodoSemiVacio(){return (cuenta < m / 2);}
        // obtener la clave que ocupa la posición i en el array de claves
        int Oclave(int i){ return claves[i];}
        // cambiar la clave que ocupa la posición i en el array de claves
        void Pclave(int i, int clave){ claves[i] = clave;}
        // obtener la rama que ocupa la posición i en el array de ramas
        Pagina* Orama(int i){ return ramas[i];}
        // cambiar la rama que ocupa la posición i en el array de ramas
        void Prama(int i, Pagina * p) { ramas[i] = p;}
        // obtener el valor de cuenta
        int Ocuenta(){ return cuenta;}
        // cambiar el valor de cuenta
        void Pcuenta(int valor) { cuenta = valor;}
        virtual ~Pagina();

    protected:
        int *claves; // puntero array de claves variables
        PPagina *ramas;    // puntero array de punteros a páginas variable
        int cuenta;        // número de claves que almacena la página

    private:
        int m; //máximo número de claves que puede almacenar la página
};

#endif // PAGINA_H
