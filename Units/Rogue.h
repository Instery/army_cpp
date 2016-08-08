#ifndef ROGUE_H
#define ROGUE_H

#include "../Units/Unit.h"
#include "../Attack/PhysicalAttack.h"


class Rogue: public Unit {
    private:
        Attack* attackMetod;
    public:
        Rogue(const std::string& name, int hp, int dmg);
        ~Rogue();
        
        void attack(Unit* enemy);
};

#endif //ROGUE_H
