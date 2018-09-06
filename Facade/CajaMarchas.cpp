#include <iostream>
#include "CajaMarchas.h"

CajaMarchas::CajaMarchas() {

    marcha = 0;
}

void CajaMarchas::cambiarMarcha(int pMarcha) {
    if ( -1 <= pMarcha && pMarcha <= 5 ){
        marcha += pMarcha;
        std::cout << imprimirMarcha() << std::endl;
    }else if( pMarcha == 10 ) {
        marcha = 0;
        std::cout << imprimirMarcha() << std::endl;
    }else if( pMarcha == 11 ){
        marcha = -1;
        std::cout << imprimirMarcha() << std::endl;
    }else{
        std::cout << imprimirMarcha() << std::endl;
    }
}

std::string CajaMarchas::imprimirMarcha() {
    if( marcha == 0  ){
        return " Su auto está en neutro. ";
    }else if( marcha == -1 ){
        return "Su auto está en reversa.";
    } else {
        return "Su auto está en " + std::to_string(marcha);
    }
}
