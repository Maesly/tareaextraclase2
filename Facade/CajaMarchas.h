
#ifndef TAREAEXTRACLASE2_CAJAMARCHAS_H
#define TAREAEXTRACLASE2_CAJAMARCHAS_H

#include "iostream"

class CajaMarchas {
private:
    int marcha = 0;

public:

    CajaMarchas();
    void cambiarMarcha(int pMarcha);
    std::string imprimirMarcha();

};
#endif //TAREAEXTRACLASE2_CAJAMARCHAS_H
