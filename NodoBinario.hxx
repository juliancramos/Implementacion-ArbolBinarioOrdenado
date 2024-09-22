#include "NodoBinario.h"

template <class T>
NodoBinario<T>::NodoBinario() : hijoIzq(nullptr), hijoDer(nullptr) {}

template <class T>
NodoBinario<T>::~NodoBinario() {
}

template <class T>
T& NodoBinario<T>::getDato() {
    return dato; 
}

template <class T>
NodoBinario<T>* NodoBinario<T>::getHijoIzq() const {
    return hijoIzq; 
}

template <class T>
NodoBinario<T>* NodoBinario<T>::getHijoDer() const {
    return hijoDer; 
}

template <class T>
void NodoBinario<T>::adicionarDesc(T& valor) {
    
}

template <class T>
void NodoBinario<T>::eliminarDesc(T& valor) {
}

template <class T>
bool NodoBinario<T>::esHoja() {
    return hijoIzq == nullptr && hijoDer == nullptr; // Retorna true si es hoja
}

template <class T>
void NodoBinario<T>::setDato(T& datoNuevo){
    this->dato=datoNuevo;
}


template <class T>
int NodoBinario<T>::altura(){
    
    if(esHoja()){
        return 0;
    }
    int altura;
    int alturaHijoIzq=-1, alturaHijoDer=-1;
    if(getHijoIzq()!=nullptr){
        alturaHijoIzq= getHijoIzq()->altura(); //Llama recursivamente a los hijos izquierdos
        //alturaHijoIzq=hijoIzq->altura();
    }
    if(getHijoDer()!=nullptr){
        alturaHijoDer = getHijoDer()->altura(); //Llama recursivamente a los hijos derechos
        //alturaHijoDer = hijoDer()->altura();
    }

    if(alturaHijoDer>=alturaHijoIzq){
        altura= alturaHijoDer+1;
    }else if(alturaHijoDer<alturaHijoIzq){
        altura= alturaHijoIzq+1;
    }
    return altura;
}

template <class T>
void NodoBinario<T>::setHijoIzq(NodoBinario<T>* izq){
    hijoIzq = izq;
}


template <class T>
void NodoBinario<T>::setHijoDer(NodoBinario<T>* der){
    hijoDer = der;
}