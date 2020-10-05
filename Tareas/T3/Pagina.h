#ifndef PAGINA_H
#define PAGINA_H

class Pagina;
typedef Pagina* PPagina;

class Pagina
{
    public:
        Pagina(int orden);
        // decide si un nodo est� lleno
        bool nodoLLeno(){return (cuenta == m - 1);}
        // decide si una p�gina tiene menos de la mitad de claves
        bool nodoSemiVacio(){return (cuenta < m / 2);}
        // obtener la clave que ocupa la posici�n i en el array de claves
        int Oclave(int i){ return claves[i];}
        // cambiar la clave que ocupa la posici�n i en el array de claves
        void Pclave(int i, int clave){ claves[i] = clave;}
        // obtener la rama que ocupa la posici�n i en el array de ramas
        Pagina* Orama(int i){ return ramas[i];}
        // cambiar la rama que ocupa la posici�n i en el array de ramas
        void Prama(int i, Pagina * p) { ramas[i] = p;}
        // obtener el valor de cuenta
        int Ocuenta(){ return cuenta;}
        // cambiar el valor de cuenta
        void Pcuenta(int valor) { cuenta = valor;}
        virtual ~Pagina();

    protected:
        int *claves; // puntero array de claves variables
        PPagina *ramas;    // puntero array de punteros a p�ginas variable
        int cuenta;        // n�mero de claves que almacena la p�gina

    private:
        int m; //m�ximo n�mero de claves que puede almacenar la p�gina
};

#endif // PAGINA_H
