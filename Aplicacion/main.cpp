#include <iostream>
#include "../Abstract Factory/Abstract.h"
#include "../Abstract Factory/Cliente.h"
#include "../Observer/Observer.h"
#include "../Adapter/Adaptador.h"
//#define CARROROJO
int main() {

    Abstract *factory;
/**
#ifdef CARROROJO

    factory = new carroRojo;
#else // CARROAZUL
    factory = new carroAzul;
#endif
    Cliente *cliente = new Cliente(factory);
    cliente->crear();
    std::cout << "Hello, World!" << std::endl;
    return 0;
*/
/*
    Subject subj;

    DivOserver divOserver1(&subj,4);
    DivOserver divOserver2(&subj,3);
    ModObserver divOserver3(&subj,3);
    subj.setVal(14);

  */

    Adaptador *conversor = new Adaptador();

    conversor->ingresarDolares(1000);
    conversor->sacarDolares(1000);
    //conversor->ingresarDolares(1000);

    cout <<"Total de colones " << conversor->getSaldo();
 }