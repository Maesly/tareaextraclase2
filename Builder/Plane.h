#ifndef TAREAEXTRACLASE2_PLANE_H
#define TAREAEXTRACLASE2_PLANE_H

#include "iostream"

//Producto final
class Plane {
    std::string avion;
    std::string cuerpo;
    std::string motor;
public:
    Plane( std::string tipoDeAvion ): avion{tipoDeAvion} {}

    void setMotor(std::string pTipo);
    void setCuerpo(std::string pCuerpo);
    std::string getMotor();
    std::string getCuerpo();
    void mostrar();

};


#endif //TAREAEXTRACLASE2_PLANE_H
