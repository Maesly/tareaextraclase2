//
// Created by maesly on 24/08/18.
//
#include <iostream>
using namespace std;
#ifndef TAREAEXTRACLASE2_CARROS_H
#define TAREAEXTRACLASE2_CARROS_H

/**
 * Clase abstracta, crea objetos de tipo carros
 */

class Carroceria{
public:
    virtual void crearCarroceria() = 0;
};

class camionetaRoja: public Carroceria{

public:
    void crearCarroceria() {
        cout << "Creando carrocería de camioneta roja" <<endl;
    }

};

class camionetaAzul: public Carroceria{

public:
    void crearCarroceria(){
        cout << "Creando carrocería de camioneta azul" <<endl;
    }
};


#endif //TAREAEXTRACLASE2_CARROS_H
