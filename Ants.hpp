#ifndef ANTS_ARMY_ANTS_H
#define ANTS_ARMY_ANTS_H
class Ants:public Anthill {
private:
    double Shield;
    bool skill;
    double damage;
    double number;
    double hp;
    void Validate() const {
        if (number==0) {
            throw invalid_argument("vse muravi pogibli. Game over");
        }
    }
public:
    Ants();
    ~Ants();
    double Heal(int m) {
        hp+=m;
        return hp;
    }


};

#endif //ANTS_ARMY_ANTS_H