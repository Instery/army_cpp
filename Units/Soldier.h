#ifndef SOLDIER_H
#define SOLDIER_H

#include "../Units/Unit.h"
#include "../Attack/PhysicalAttack.h"

class Soldier: public Unit {
    // private:
    public:
        // State* state;
        // State* alterState;
        // State* current;
        Soldier(const std::string& name, int hp, int dmg);
        ~Soldier();
        
        // void attack(Attack* enemy);
};

#endif //SOLDIER_H

