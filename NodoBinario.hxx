#include "NodoBinario.h"

template <class T>
NodoBinario<T>::NodoBinario() : hijoIzq(nullptr), hijoDer(nullptr) {}

template <class T>
NodoBinario<T>::~NodoBinario() {
}

template <class T>
T& NodoBinario<T>::getDato() {
}

template <class T>
NodoBinario<T>* NodoBinario<T>::getHijoIzq() const {
}

template <class T>
NodoBinario<T>* NodoBinario<T>::getHijoDer() const {
}

template <class T>
void NodoBinario<T>::adicionarDesc(T& valor) {
    
}

template <class T>
void NodoBinario<T>::eliminarDesc(T& valor) {
}

template <class T>
bool NodoBinario<T>::esHoja() {
}

template <class T>
void NodoBinario<T>::setDato(T& datoNuevo){
}


template <class T>
int NodoBinario<T>::altura(){
    
}

template <class T>
void NodoBinario<T>::setHijoIzq(NodoBinario<T>* izq){
}


template <class T>
void NodoBinario<T>::setHijoDer(NodoBinario<T>* der){
}