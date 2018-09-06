
#include "PropellerBuilder.h"

void PropellerBuilder::construirPartes() {
    std::cout << "Se construyen el objeto avión de tipo Propeller ( clase PropellerBuilder)" << std::endl;
    avion = new Plane("Avión de Hélice");
}

void PropellerBuilder::construirMotor() {
    std::cout << "Se construye la hélice del avión ( clase PropellerBuilder)" << std::endl;
    avion->setMotor("Motor de Hélice");
}

void PropellerBuilder::construirCuerpo() {
    std::cout << "Se construyen el cuerpo del avión de tipo Propeller ( clase PropellerBuilder)" << std::endl;
    avion->setCuerpo("Cuerpo de avión de Hélice");
}