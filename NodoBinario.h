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
        void adicionarDesc(T& valor);
        void eliminarDesc (T& valor);
        bool esHoja();
        void setDato(T& datoNuevo);
        int altura();


        void setHijoIzq(NodoBinario<T>* izq);
        void setHijoDer(NodoBinario<T>* der);
        
        
        
        
        
        void preOrden();

        
        
};

#include "NodoBinario.hxx"

#endif