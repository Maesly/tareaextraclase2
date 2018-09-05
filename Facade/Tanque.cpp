#include "Tanque.h"

std::string Tanque::repostar(int pCantidadDeGasolina) {
    if( (pCantidadDeGasolina + nivelDeGasolina) <= nivelMaximoDeGasolina && pCantidadDeGasolina >= 0 ){
        nivelDeGasolina += pCantidadDeGasolina;
        return "El nivel actual de gasolina es " + std::to_string(pCantidadDeGasolina);
    }else{
        return "No se pudo repostar el vehículo con el nivel propuesto de gasolina.";
    }
}

void Tanque::getNivelGasolina() {
    std::cout <<"El nivel de Gasolina es: " << nivelDeGasolina << std::endl;
}