#include "ArbolBinarioOrdenado.h"

#include <iostream>
template <class T>
ArbolBinarioOrdenado<T>::ArbolBinarioOrdenado() {
    raiz = nullptr;
}

template <class T>
ArbolBinarioOrdenado<T>::~ArbolBinarioOrdenado() {
    if(raiz!=nullptr){
        delete raiz;
        raiz=nullptr;
    }

}

template <class T>
bool ArbolBinarioOrdenado<T>::esVacio() {
    return raiz == nullptr;
}

template <class T>
T ArbolBinarioOrdenado<T>::datoRaiz() {
    if(raiz!=nullptr){
        return raiz->getDato();
    }
    return -1;
}

template <class T>
int ArbolBinarioOrdenado<T>::altura() {
    if(esVacio()){
        return -1;
    }
    if(raiz->esHoja()){
        return 0;
    }
    return raiz->altura();
}

template <class T>
int ArbolBinarioOrdenado<T>::tamano() {
    return 0; // Valor por defecto
}

template <class T>
bool ArbolBinarioOrdenado<T>::insertar(T valorDato) {
    bool duplicado=false, insertado=false;
    if (esVacio()) {
        raiz = new NodoBinario<T>();  // Se le asigna memoria a la raiz
        raiz->setDato(valorDato);
        insertado = true;
    }else{
        NodoBinario<T>* nodoActual = raiz; //Se comienza el proceso con la raiz
        NodoBinario<T>* nodoPadre = raiz;


        while(nodoActual!=nullptr){
            nodoPadre=nodoActual;
            if(valorDato > nodoActual->getDato()){
                nodoActual = nodoActual->getHijoDer();
            }else if(valorDato < nodoActual->getDato()){
                nodoActual = nodoActual->getHijoIzq();
            }else{
                duplicado=true;
                return false;
            }
        }

        if(!duplicado){
            NodoBinario<T>* nuevoNodo= new NodoBinario<T>();
            nuevoNodo->setDato(valorDato);
            if(nuevoNodo != nullptr){
                if(valorDato < nodoPadre->getDato()){
                    nodoPadre->setHijoIzq(nuevoNodo);
                }else{
                    nodoPadre->setHijoDer(nuevoNodo);
                }
                insertado=true;
            }
        }

    }
    return insertado;
}

template <class T>
bool ArbolBinarioOrdenado<T>::eliminar(T valorDato) {
    NodoBinario<T>* nodo = raiz;
    NodoBinario<T>* nodoPadre = nullptr;

    // Busca el nodo a eliminar
    while (nodo != nullptr && nodo->getDato() != valorDato) {
        nodoPadre = nodo;
        if (valorDato < nodo->getDato()) {
            nodo = nodo->getHijoIzq();
        } else {
            nodo = nodo->getHijoDer();
        }
    }

    // Nodo no encontrado
    if (nodo == nullptr) {
        return false;
    }

    // Caso 1: Nodo hoja
    if (nodo->esHoja()) {
        if (nodo == raiz) {
            delete raiz;
            raiz = nullptr;
        } else if (nodo == nodoPadre->getHijoIzq()) {
            nodoPadre->setHijoIzq(nullptr);
        } else {
            nodoPadre->setHijoDer(nullptr);
        }
        delete nodo;
    }
    // Caso 2: Nodo con un solo hijo
    else if (nodo->getHijoIzq() == nullptr || nodo->getHijoDer() == nullptr) {
        NodoBinario<T>* hijo = (nodo->getHijoIzq() != nullptr) ? nodo->getHijoIzq() : nodo->getHijoDer();
    
        if (nodoPadre->getDato() > nodo->getDato()) {
            nodoPadre->setHijoIzq(hijo);
        } else {
            nodoPadre->setHijoDer(hijo);
        }
        delete nodo; // Eliminar el nodo 
    }
    // Caso 3: Nodo con dos hijos
    else {
        NodoBinario<T>* sucesor = nodo->getHijoDer();
        NodoBinario<T>* padreSucesor = nodo;

        while (sucesor->getHijoIzq() != nullptr) {
            padreSucesor = sucesor;
            sucesor = sucesor->getHijoIzq();
        }

        nodo->setDato(sucesor->getDato()); // Reemplaza el dato del nodo a eliminar

        // Eliminar el sucesor
        if (padreSucesor->getHijoIzq() == sucesor) {
            padreSucesor->setHijoIzq(sucesor->getHijoDer());
        } else {
            padreSucesor->setHijoDer(sucesor->getHijoDer());
        }
        delete sucesor;
    }


    return true;
}



template <class T>
bool ArbolBinarioOrdenado<T>::buscar(T valorDato) {
    if(raiz!=nullptr){
        NodoBinario<T>* nodo= raiz;
        while(nodo!=nullptr){
            if(valorDato > nodo->getDato()){
            nodo = nodo->getHijoDer();
            }else if(valorDato < nodo->getDato()){
                nodo = nodo->getHijoIzq();
            }else{
                return true;
            }
        }

    }
    return false;
}

template <class T>
void ArbolBinarioOrdenado<T>::preOrden() {
    //Primero el padre, luego hizo iquierdo y luego hijo derecho
    if(raiz!=nullptr){
        raiz->preOrden();
    }
}

template <class T>
void ArbolBinarioOrdenado<T>::posOrden() {
    //Primero hijos, luego padre
    raiz->posOrden();
}

template <class T>
void ArbolBinarioOrdenado<T>::inOrden() {
    //Hijo izquierdo, luego padre, luego hijo derecho
    raiz->inOrden();
}



template <class T>
void ArbolBinarioOrdenado<T>::nivelOrden() {
    //Por niveles, de izquierda a derecha
    raiz->nivelOrden();
}