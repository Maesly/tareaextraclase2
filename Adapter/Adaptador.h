//
// Created by maesly on 26/08/18.
//
#include "IAdaptador.h"
#include "Colones.h"
#ifndef TAREAEXTRACLASE2_ADAPTADOR_H
#define TAREAEXTRACLASE2_ADAPTADOR_H
class Adaptador : public IAdaptador{

    Colones *colon = new Colones();

public:
    Adaptador(){

    };

    double getSaldo(){
        return colon->getTotalColones();
    }

    void sacarDolares(double dolares){
        double colones = dolares*565.24;
        colon->sacarColones(colones);
    }
    void ingresarDolares(double dolares){
        double colones = dolares*565.24;
        colon->ingresarColones(colones);
    }


};
#endif //TAREAEXTRACLASE2_ADAPTADOR_H
