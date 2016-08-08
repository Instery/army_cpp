#ifndef WEREWOLFATTACK_H
#define WEREWOLFATTACK_H

#include <iostream>
#include "Attack.h"

class WerewolfAttack : public Attack {
    protected:
        int damage;
    public:
        WerewolfAttack(int damage = 0);
        virtual ~WerewolfAttack();
        
        virtual void attack(Unit* target);
};

#endif //WEREWOLFATTACK_H
