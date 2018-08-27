//
// Created by maesly on 24/08/18.
//
#include "Carros.h"
#ifndef TAREAEXTRACLASE2_ABSTRACT_H
#define TAREAEXTRACLASE2_ABSTRACT_H

class Abstract{

public:
    virtual Carroceria *crear_carroceria() = 0;

};

class carroRojo: public Abstract{
public:
    Carroceria *crear_carroceria() {
        return new camionetaRoja;
    }
};

class carroAzul: public Abstract{

public:
    Carroceria *crear_carroceria(){
        return new camionetaAzul;
    }
};

#endif //TAREAEXTRACLASE2_ABSTRACT_H
