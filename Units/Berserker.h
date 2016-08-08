#ifndef BERSERKER_H
#define BERSERKER_H

#include "Unit.h"
#include "../Attack/PhysicalAttack.h"

class Berserker : public Unit {
    public:
        Berserker(const std::string& name, int hp, int dmg);
        ~Berserker();
        
        void takeMagicDamage(int dmg);
        void attack(Unit* enemy);
};


#endif //BERSERKER_H

