#ifndef TAREAEXTRACLASE2_OBSERVER_H
#define TAREAEXTRACLASE2_OBSERVER_H


#include "Subject.h"
#include "iostream"

class Observer{
    Subject *model;
    int denom;
public:
    Observer(Subject *mod,int div){
        model = mod;
        denom = div;
        model->attach(this);
    }

    virtual void update()= 0;

protected:
    Subject *getSubject(){
        return model;
    }

    int getDivisor(){
        return denom;
    }

};

void Subject::notify() {
    for(int i = 0; i< views.size();i++)
        views[i]->update();
}

class DivOserver: public Observer{
public:
    DivOserver(Subject *mod, int div): Observer(mod,div){}
    void update(){

        int v = getSubject()->getVal(), d = getDivisor();
        std::cout << v << " div "<< d << " is "<< v/d << "\n";
    }
};

class ModObserver: public Observer{

public:
    ModObserver(Subject *mod,int div): Observer(mod,div){}
    void update(){
        int v = getSubject()->getVal(), d = getDivisor();
        std::cout << v << " mod " << d << " is " << v % d << '\n';

    }
};

#endif //TAREAEXTRACLASE2_OBSERVER_H