#include <iostream>
#include "Abstract Factory/Abstract.h"
#include "Abstract Factory/Cliente.h"

//#define CARROROJO
int main() {

    Abstract *factory;

#ifdef CARROROJO

    factory = new carroRojo;
#else // CARROAZUL
    factory = new carroAzul;
#endif
    Cliente *cliente = new Cliente(factory);
    cliente->crear();
    std::cout << "Hello, World!" << std::endl;
    return 0;
}