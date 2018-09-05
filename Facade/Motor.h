#ifndef TAREAEXTRACLASE2_MOTOR_H
#define TAREAEXTRACLASE2_MOTOR_H

#include "iostream"
#include "SistemaElectrico.h"
#include "SistemaSeguridad.h"

class Motor {
private:
    bool isOn;
    SistemaElectrico *sistemaElectrico = new SistemaElectrico();
    SistemaSeguridad *sistemaSeguridad = new SistemaSeguridad();

public:
public:
    Motor(){
    isOn = false; }


    std::string encender();
    std::string apagar();
    std::string revisarSistemas();


};

#endif //TAREAEXTRACLASE2_MOTOR_H
