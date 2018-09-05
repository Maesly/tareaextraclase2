#ifndef TAREAEXTRACLASE2_CARRO_H
#define TAREAEXTRACLASE2_CARRO_H

#include "iostream"
#include "Motor.h"
#include "SistemaSeguridad.h"
#include "SistemaElectrico.h"
#include "Llantas.h"
#include "LucesFrente.h"
#include "CajaMarchas.h"
#include "Tanque.h"


class Carro {
private:
    Motor *motor = new Motor();
    SistemaSeguridad *sistemaSeguridad = new SistemaSeguridad();
    SistemaElectrico *sistemaElectrico = new SistemaElectrico();
    Llantas *llantas = new Llantas();
    LucesFrente *lucesFrente = new LucesFrente();
    CajaMarchas *cajaMarchas = new CajaMarchas();
    Tanque *tanque = new Tanque();

    void encenderCarro();
    void apagarCarro();
    void moverVolanteDerecha();
    void moverVolanteIzquierda();
    void moverVolantePosicionInicial();
    void encenderLuces();
    void subirIntensidadLuces();
    void bajarIntesidadLuces();
    void apagarLuces();
    void subirMarcha();
    void bajarMarcha();
    void reversa();
    void neutro();
    void revisarNivelGasolina();
    void repostar(int cantidadGasolina);


};

#endif //TAREAEXTRACLASE2_CARRO_H
