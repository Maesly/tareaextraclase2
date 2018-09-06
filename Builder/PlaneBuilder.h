#ifndef TAREAEXTRACLASE2_PLANEBUILDER_H
#define TAREAEXTRACLASE2_PLANEBUILDER_H

#include "Plane.h"

/**
 * Clase Abstracta, todos los constructores deben llevar estos métodos, por ejemplo
 * el JetBuilder y el PropellerBuilder son clases concretas de tipo PlaneBuilder.
 */

class PlaneBuilder {

protected:
    Plane *avion;

public:
    virtual void construirPartes() = 0;
    virtual void construirCuerpo() = 0;
    virtual void construirMotor() = 0;
    Plane* getAvion();
};


#endif //TAREAEXTRACLASE2_PLANEBUILDER_H
