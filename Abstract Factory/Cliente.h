//
// Created by maesly on 24/08/18.
//
#include "Abstract.h"
#ifndef TAREAEXTRACLASE2_CLIENTE_H
#define TAREAEXTRACLASE2_CLIENTE_H

class Cliente{
private:
    Abstract *abstract ;

public:
    Cliente(Abstract *abstract1){
        this->abstract = abstract1;
    }

    void crear(){

        Carroceria *carroceria = abstract->crear_carroceria();
        carroceria->crearCarroceria();
    }

};

#endif //TAREAEXTRACLASE2_CLIENTE_H
