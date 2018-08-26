//
// Created by maesly on 26/08/18.
//
#include <iostream>
#include <vector>
using namespace std;
#ifndef TAREAEXTRACLASE2_SUBJECT_H
#define TAREAEXTRACLASE2_SUBJECT_H

class Subject{
    vector <class Observer *> views;
    int value;
public:
    void attach(Observer *obs){
        views.push_back(obs);
    }
    void setVal(int val){
        value = val;
        notify();
    }
    int getVal(){
        return value;
    }
    void notify();

};
#endif //TAREAEXTRACLASE2_SUBJECT_H
