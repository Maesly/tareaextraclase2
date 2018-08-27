//
// Created by maesly on 26/08/18.
//

#ifndef TAREAEXTRACLASE2_DOLARES_H
#define TAREAEXTRACLASE2_DOLARES_H
class Colones{
private:
    double colones = 0;

public:

    Colones(){};
    double getTotalColones(){
        return colones;
    };

    void sacarColones(double colon){
        colones -= colon;
    }

    void ingresarColones(double colon){
        colones += colon;
    }
};

#endif //TAREAEXTRACLASE2_DOLARES_H
