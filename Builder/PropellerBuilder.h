#ifndef TAREAEXTRACLASE2_PROPELLERBUILDER_H
#define TAREAEXTRACLASE2_PROPELLERBUILDER_H

#include "PlaneBuilder.h"

//Clase concreta de la clase PlaneBuilder
//Sabe solamente construir un avión con hélice.
class PropellerBuilder: public PlaneBuilder {
public:
    void construirPartes();
    void construirMotor();
    void construirCuerpo();
};


#endif //TAREAEXTRACLASE2_PROPELLERBUILDER_H
