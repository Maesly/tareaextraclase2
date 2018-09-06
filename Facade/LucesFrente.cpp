#include "LucesFrente.h"

std::string LucesFrente::encenderLuces() {

    intensidad = "media";
    areOn = true;
    return "Luces encendidas a intensidad: " + intensidad;
}

std::string LucesFrente::cambiarIntensidad(int Intensidad) {
    if( areOn ){
        if((Intensidad == 1 && intensidad == "baja") || ( Intensidad == 2 && intensidad == "media" ) || ( Intensidad == 3 && intensidad == "alta" ) ){
            return "Las luces ya están en intensidad: " + intensidad;
        }else{
            if ( Intensidad == 1 ){
                intensidad = "baja";
                return "Las luces ahora están en intensidad baja.";
            } else if( Intensidad == 2 ){
                intensidad = "media";
                return " Las luces ahora están en intensidad media.";
            } else{
                intensidad = "alta";
                return "Las luces ahora están en intensidad alta.";
            }

            }
    }else{
        return "Las luces están apagadas.";
    }
}

std::string LucesFrente::apagarLuces() {
    intensidad = "baja";
    areOn = false;
    return "Las luces ahora están apagadas.";
}