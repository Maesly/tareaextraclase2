#include "Plane.h"


void Plane::setMotor(std::string pTipo) {
    motor = pTipo;
}

void Plane::setCuerpo(std::string pCuerpo) {
    cuerpo = pCuerpo;
}

std::string Plane::getMotor() {
    return motor;
}

std::string Plane::getCuerpo() {
    return cuerpo;
}

void Plane::mostrar() {
    std::cout << "Tipo de Avión: " << avion << std::endl;
    std::cout << "Tipo de Cuerpo: " << cuerpo << std::endl;
    std::cout << "Tipo de motor: " << motor << std::endl;
}