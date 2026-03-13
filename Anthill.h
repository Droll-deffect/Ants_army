#ifndef ANTS_ARMY_ANTHILL_H
#define ANTS_ARMY_ANTHILL_H
#include <string>
#include <iostream>
using namespace std;
class Anthill {
private:
    double Shield;
    bool Existence;
    double HealPoint;
    double time;
    Anthill(double Shield, bool Existence, double HealPoint,    double time){
        Shield = Shield;
        Existence = Existence;
        HealPoint = HealPoint;
        time = time;
    };
    static Anthill* anthill_;
    strin value;
public:
    static Anthill& getInstance() {
        static Anthill instance;
        return instance;
    }

};
#include "Anthill.h"
#endif //ANTS_ARMY_ANTHILL_H