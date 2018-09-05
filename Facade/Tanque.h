//
// Created by Josue Chaves on 27/8/18.
//

#ifndef TAREAEXTRACLASE2_TANQUE_H
#define TAREAEXTRACLASE2_TANQUE_H

#include "iostream"

class Tanque {
private:
    int nivelDeGasolina = 0;
    int nivelMaximoDeGasolina = 100;

public:
    std::string repostar( int pCantidadDeGasolina );
    void getNivelGasolina();


};


#endif //TAREAEXTRACLASE2_TANQUE_H
