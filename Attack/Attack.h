#ifndef ATTACK_H
#define ATTACK_H

#include <iostream>
#include "../Units/Unit.h"

class Unit;

class Attack {
    public:
        Attack();
        virtual ~Attack();

        virtual void attack(Unit* enemy) = 0;
};

#endif //ATTACK_H


