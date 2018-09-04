
#ifndef TAREAEXTRACLASE2_CAJAMARCHAS_H
#define TAREAEXTRACLASE2_CAJAMARCHAS_H

#include <string>

class CajaMarchas {
private:
    std::string marcha;

public:

    CajaMarchas();
    ~CajaMarchas();
    std::string cambiarMarcha( std::string pMarcha );

};
#endif //TAREAEXTRACLASE2_CAJAMARCHAS_H
