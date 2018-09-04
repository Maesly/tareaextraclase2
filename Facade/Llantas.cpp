#include "Llantas.h"
std::string Llantas::moverLlantas(std::string moverHacia) {
    posicionLlantas = moverHacia;
    return "La llanta se movió a la siguiente posición: " + posicionLlantas;
}