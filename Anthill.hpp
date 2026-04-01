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
    Anthill(){
        Shield = 1000;
        Existence = true;
        HealPoint = 2000;
        time = time;
    };
    static Anthill* anthill_;
public:
    static Anthill& getInstance() {
        static Anthill instance;
        return instance;
    }

};
#include "Anthill.hpp"
#endif //ANTS_ARMY_ANTHILL_H