#ifndef PHYSICALATTACK_H
#define PHYSICALATTACK_H

#include <iostream>
#include "Attack.h"

class PhysicalAttack : public Attack {
    protected:
        int damage;
    public:
        PhysicalAttack(int damage = 0);
        virtual ~PhysicalAttack();
        
        virtual void attack(Unit* target);
};

#endif //PHYSICALATTACK_H
