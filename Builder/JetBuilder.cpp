#include "JetBuilder.h"

void JetBuilder::construirPartes() {
    avion = new Plane("Jet");
}

void JetBuilder::construirMotor() {
    avion->setMotor("Motor Jet");
}

void JetBuilder::construirCuerpo() {
    avion->setCuerpo("Cuerpo de Jet");
}