#include "JetBuilder.h"

void JetBuilder::construirPartes() {
    std::cout << "Se construyen el objeto avión de tipo Jet ( clase JetBuilder)" << std::endl;
    avion = new Plane("Jet");
}

void JetBuilder::construirMotor() {
    std::cout << "Se construyen el motor para el Jet ( clase JetBuilder)" << std::endl;
    avion->setMotor("Motor Jet");
}

void JetBuilder::construirCuerpo() {
    std::cout << "Se construyen el cuerpo del avión de tipo Jet ( clase JetBuilder)" << std::endl;
    avion->setCuerpo("Cuerpo de Jet");
}