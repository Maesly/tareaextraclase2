#ifndef TAREAEXTRACLASE2_MOTOR_H
#define TAREAEXTRACLASE2_MOTOR_H

#include "iostream"
#include "SistemaElectrico.h"
#include "SistemaSeguridad.h"

class Motor {
private:
    bool isOn;


public:
    std::string encender();
    std::string apagar();
    std::string revisarSistemas(SistemaSeguridad pSistemaSeguridad, SistemaElectrico pSistemaElectrico);


};

#endif //TAREAEXTRACLASE2_MOTOR_H
