#include "NodoBinario.h"
#include "ArbolBinarioOrdenado.h"

#include <string>
#include <iostream>

int main(){
    std::cout<<"hola"<<std::endl;
    ArbolBinarioOrdenado<int>* arbol = new ArbolBinarioOrdenado<int>();
    std::cout<<"Está:"<<arbol->buscar(8)<<std::endl;
    arbol->insertar(8);
    arbol->insertar(14);
    arbol->insertar(1);
    arbol->insertar(3);
    arbol->insertar(7);
    std::cout<< arbol->datoRaiz() <<std::endl;
    std::cout<<arbol->altura()<<std::endl;
    std::cout<<arbol->esVacio()<<std::endl;
    std::cout<<"Está:"<<arbol->buscar(8)<<std::endl;
}