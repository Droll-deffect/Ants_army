
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
    int i =0;
public:
    Anthill(double Shield, bool Existence, double HealPoint){
    Shield = Shield;
    Existence = Existence;
    HealPoint = HealPoint;
    };





};
#include "Anthill.h"
#endif //ANTS_ARMY_ANTHILL_H