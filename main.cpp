#include "NodoBinario.h"
#include "ArbolBinarioOrdenado.h"

#include <string>
#include <iostream>

int main(){
    ArbolBinarioOrdenado<int>* arbol = new ArbolBinarioOrdenado<int>();
    arbol->insertar(22);
    arbol->insertar(15);
    arbol->insertar(3);
    arbol->insertar(8);
    arbol->insertar(40);
    
    arbol->insertar(45);
    arbol->insertar(13);
    arbol->insertar(20);
    arbol->insertar(30);
    arbol->insertar(1);

    arbol->insertar(7);
    arbol->insertar(34);
    arbol->insertar(48);
    arbol->insertar(53);
    arbol->insertar(9);

    arbol->insertar(23);
    arbol->insertar(12);
    arbol->insertar(51);
    arbol->insertar(4);
    arbol->insertar(10);

    
    // std::cout<<arbol->altura()<<std::endl;
    // std::cout<<arbol->esVacio()<<std::endl;
    // std::cout<<"Está:"<<arbol->buscar(8)<<std::endl;
    std::cout<<"Pre-orden: "<<std::endl;
    arbol->preOrden();
    std::cout<<std::endl;

    std::cout<<"Pos-orden: "<<std::endl;
    arbol->posOrden();
    std::cout<<std::endl;

    std::cout<<"In-orden: "<<std::endl;
    arbol->inOrden();
    std::cout<<std::endl;

    std::cout<<"Nivel-orden: "<<std::endl;
    arbol->nivelOrden();
    std::cout<<std::endl;
    std::cout<<"Eliminar: "<<arbol->eliminar(15)<<std::endl;

    std::cout<<"Despues de la eliminacion:"<<std::endl;

    std::cout<<"Pre-orden: "<<std::endl;
    arbol->preOrden();
    std::cout<<std::endl;

    std::cout<<"Pos-orden: "<<std::endl;
    arbol->posOrden();
    std::cout<<std::endl;

    std::cout<<"In-orden: "<<std::endl;
    arbol->inOrden();
    std::cout<<std::endl;

    std::cout<<"Nivel-orden: "<<std::endl;
    arbol->nivelOrden();
    std::cout<<std::endl;
}