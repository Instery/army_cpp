#ifndef VAMPIREATTACK_H
#define VAMPIREATTACK_H

#include <iostream>
#include "Attack.h"
#include "../Units/Vampire.h"

class Vampire;
class Unit;

class VampireAttack : public Attack {
    protected:
        int damage;
        Unit* self;
    public:
        VampireAttack(int damage, Unit* self);
        virtual ~VampireAttack();
        
        virtual void attack(Unit* target);
        virtual void lifeLeech(Unit* victim, Unit* self);
};

#endif //VAMPIREATTACK_H
