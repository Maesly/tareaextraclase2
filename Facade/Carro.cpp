//
// Created by Josue Chaves on 27/8/18.
//

#include "Carro.h"

void Carro::encenderCarro() {
    std::cout << "Encenciendo el carro(clase Carro)" << std::endl;
    std::cout << motor->encender() << std::endl;
    std::cout << motor->revisarSistemas() << std::endl;
    std::cout << "Carro encendido(clase Carro)" << std::endl;
}

void Carro::apagarCarro() {
    std::cout << "Apagando el carro(clase Carro)" << std::endl;
    std::cout << motor->apagar() << std::endl;
    std::cout << "Carro apagado(clase Carro)" << std::endl;

}

void Carro::moverVolanteDerecha() {
    std::cout << "Moviendo volante a la derecha (clase Carro)" << std::endl;
    std::cout << llantas->moverLlantas("derecha") << std::endl;
}

void Carro::moverVolanteIzquierda() {
    std::cout << "Moviendo volante a la Izquierda (clase Carro)" << std::endl;
    std::cout << llantas->moverLlantas("izquierda") << std::endl;
}

void Carro::moverVolantePosicionInicial() {
    std::cout << "Moviendo volante a la posición inicial (clase Carro)" << std::endl;
    std::cout << llantas->moverLlantas("Posición Inicial") << std::endl;
}

void Carro::encenderLuces() {
    std::cout << "Encendiendo las luces (clase Carro)" << std::endl;
    std::cout << lucesFrente->encenderLuces() << std::endl;
}

void Carro::subirIntensidadLuces() {
    std::cout << "Subiendo la intensidad de las luces (clase Carro)" << std::endl;
    std::cout << lucesFrente->cambiarIntensidad(3) << std::endl;
}

void Carro::bajarIntesidadLuces() {
    std::cout << "Bajando la intensidad de las luces (clase Carro)" << std::endl;
    std::cout << lucesFrente->cambiarIntensidad(1) << std::endl;
}

void Carro::apagarLuces() {
    std::cout << "Apagando las luces (clase Carro)" << std::endl;
    std::cout << lucesFrente->apagarLuces() << std::endl;
}

void Carro::subirMarcha() {
    std::cout << "Subiendo marcha (clase Carro)" << std::endl;
    cajaMarchas->cambiarMarcha(1);
}

void Carro::bajarMarcha() {
    std::cout << "Bajando marcha (clase Carro)" << std::endl;
    cajaMarchas->cambiarMarcha(-1);
}

void Carro::reversa() {
    std::cout << "Reversa (clase Carro)" << std::endl;
    cajaMarchas->cambiarMarcha(11);
}

void Carro::neutro() {
    std::cout << "Neutro (clase Carro)" << std::endl;
    cajaMarchas->cambiarMarcha(10);
}

void Carro::revisarNivelGasolina() {
    std::cout << "Nivel de Gasolina (clase Carro)" << std::endl;
    tanque->getNivelGasolina();
}

void Carro::repostar(int cantidadGasolina) {
    std::cout << "Repostando"
                 " (clase Carro)" << std::endl;
    tanque->repostar(cantidadGasolina);
}