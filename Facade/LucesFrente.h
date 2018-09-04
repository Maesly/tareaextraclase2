#ifndef TAREAEXTRACLASE2_LUCESFRENTE_H
#define TAREAEXTRACLASE2_LUCESFRENTE_H
#include "iostream"

class LucesFrente {
private:
    bool areOn;
    std::string intensidad;

public:
    std::string encenderLuces();
    std::string cambiarIntensidad(int Intensidad);
    std::string apagarLuces();
};


#endif //TAREAEXTRACLASE2_LUCESFRENTE_H
