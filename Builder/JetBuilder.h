#ifndef TAREAEXTRACLASE2_JETBUILDER_H
#define TAREAEXTRACLASE2_JETBUILDER_H

#include "PlaneBuilder.h"
//Clase concreta del PlaneBuilder
//Sabe solamente construir un avión Jet.
class JetBuilder: public PlaneBuilder {
public:
    void construirPartes();
    void construirMotor();
    void construirCuerpo();
};


#endif //TAREAEXTRACLASE2_JETBUILDER_H
