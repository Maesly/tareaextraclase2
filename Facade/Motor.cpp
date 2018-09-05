#include "Motor.h"

std::string Motor::revisarSistemas() {
    std::cout << sistemaSeguridad->chequearSistemaSeguridad() << std::endl;
    std::cout << sistemaElectrico->chequearSistemaElectrico() << std::endl;
    return "Sistemas Chequeados";
}

std::string Motor::encender() {
    if(isOn){
        return "Motor ya está Encendido";
    } else{
        isOn = true;
        return "Motor Encendido";
    }
}

std::string Motor::apagar() {
    if( !isOn ){
        return " El motor ya está apagado ";
    }else{
        delete sistemaElectrico;
        delete sistemaSeguridad;
        return "Motor Apagado";
    }
}