#ifndef _NODO_BINARIO_H_
#define _NODO_BINARIO_H_

#include <string>

template <class T>
class NodoBinario{
    protected:
        T dato;
        NodoBinario <T>* hijoIzq;
        NodoBinario <T>* hijoDer;
    
    public: 
        NodoBinario();
        ~NodoBinario();
        T& getDato();
        NodoBinario<T>* getHijoIzq() const;
        NodoBinario<T>* getHijoDer() const;
        bool esHoja();
        void setDato(T& datoNuevo);
        int altura();


        void setHijoIzq(NodoBinario<T>* izq);
        void setHijoDer(NodoBinario<T>* der);
                 
        
        void preOrden();
        void posOrden();
        void inOrden();
        void nivelOrden();

        
};

#include "NodoBinario.hxx"

#endif