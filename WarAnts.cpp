#include <bits/stdc++.h>
using namespace std;

class WarAnts:public Ants{
    private:
    int AttackRange;
    
    public:
    int DealDamage(){
        for (int i=1; i<AttackRange; i++){
            for (int j=1; j<AttackRange; j++){
                if Place(ant.x+i, ant.y)==1{
                    
                }
            }
        }
    }
}
class Invaders: public WarAnts{
    private:
    
}
class Guardian: public WarAnts{
    private:
    public:
    int QueenShield(){
        if number<100{
            Queen.MaxHp*=1.3;
            Queen.Hp*=1.3;
        }
    
    }
}
int main() {
	// your code goes here

}
