#include "Director.h"

Plane* Director::crearAvion(PlaneBuilder *constructor) {
    std::cout << "Clase director dicta los pasos para construir los objetos del avión." << std::endl;
    std::cout << "Se construyen las Partes (clase Director)"<< std::endl;
    constructor->construirPartes();
    std::cout << "Se construye el cuerpo del avión (clase director)" << std::endl;
    constructor->construirCuerpo();
    std::cout << "Finalmente se construye el motor (clase Director)" << std::endl;
    constructor->construirMotor();
    std::cout << "Se retorna el avión construído (clase Director)" << std::endl;
    return constructor->getAvion();
}