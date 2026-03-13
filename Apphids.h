//
// Created by Pavel on 13.03.2026.
//

#ifndef ANTS_ARMY_APPHIDS_H
#define ANTS_ARMY_APPHIDS_H
class Apphids :public Anthill {
private:
    int number;
    double mood;
    double hungry;
public:
    Apphids();
    ~Apphids();
    string Sacrifice(int number, int k ) {
        if (K>0) {
            return "nehvataet tli";
        }
        else {
            number-=k;
            Ants.Heal(10*k);
        }



    }
};
#endif //ANTS_ARMY_APPHIDS_H