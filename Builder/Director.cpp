#include "Director.h"

Plane* Director::crearAvion(PlaneBuilder *constructor) {
    constructor->construirPartes();
    constructor->construirCuerpo();
    constructor->construirMotor();
    return constructor->getAvion();

}