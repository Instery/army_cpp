#ifndef VAMPIRE_H
#define VAMPIRE_H

#include "Unit.h"
#include "../Attack/VampireAttack.h"

class Vampire : public Unit {
    private:
        
    public:
        Vampire(const std::string& name, int hp, int dmg);
        ~Vampire();
        
        void attack(Unit* enemy);
        void counterAttack(Unit* enemy);
        void lifeLeech(Unit* victim, Unit* self);
};

#endif //VAMPIRE_H
