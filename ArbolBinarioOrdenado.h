#ifndef _ARBOL_BINARIO_ORDENADO_H
#define _ARBOL_BINARIO_ORDENADO_H

#include "NodoBinario.h"

template<class T>
class ArbolBinarioOrdenado {
protected:
    NodoBinario<T>* raiz; 
public:
    ArbolBinarioOrdenado();
    ~ArbolBinarioOrdenado(); 
    bool esVacio(); 
    T datoRaiz(); 
    int altura();
    int tamano();
    bool insertar(T valorDato);
    bool eliminar(T valorDato); 
    bool buscar(T valorDato); 
    void preOrden();
    void inOrden();
    void posOrden();
    void nivelOrden();
};

#include "ArbolBinarioOrdenado.hxx"
#endif