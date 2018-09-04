#include "CajaMarchas.h"

CajaMarchas::CajaMarchas() {

    marcha = "Neutro";
}

std::string CajaMarchas::cambiarMarcha(std::string pMarcha) {

    marcha = pMarcha;
    return "Marcha actual: " + pMarcha;
}

