//
// Created by Josue Chaves on 4/9/18.
//

#include "PropellerBuilder.h"

void PropellerBuilder::construirPartes() {
    avion = new Plane("Avión de Hélice");
}

void PropellerBuilder::construirMotor() {
    avion->setMotor("Motor de Hélice");
}

void PropellerBuilder::construirCuerpo() {
    avion->setCuerpo("Cuerpo de avión de Hélice");
}