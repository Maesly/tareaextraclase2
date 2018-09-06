//
// Created by Josue Chaves on 5/9/18.
//

#ifndef TAREAEXTRACLASE2_APLPATRONESDISENO_H
#define TAREAEXTRACLASE2_APLPATRONESDISENO_H

#include <iostream>
#include "../Facade/Carro.h"
#include "../Adapter/Adaptador.h"
#include "../Builder/Director.h"
#include "../Builder/JetBuilder.h"
#include "../Builder/PropellerBuilder.h"
#include "../Abstract Factory/Carros.h"
#include "../Abstract Factory/Cliente.h"
#include "../Abstract Factory/Abstract.h"
#include "../Observer/Subject.h"
using  namespace std;

class AplPatronesDiseno {
private:
    int opcion ;

    Carro *carro = new Carro();
    Adaptador *conversor = new Adaptador();

    Director director;
    JetBuilder constructorJet;
    PropellerBuilder constructorHelice;

    Abstract *factory;

    Subject sujeto;

public:
    void menuPrincipal();


};


#endif //TAREAEXTRACLASE2_APLPATRONESDISENO_H
