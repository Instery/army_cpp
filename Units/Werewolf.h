#ifndef WEREWOLF_H
#define WEREWOLF_H

#include <iostream>

#include "../Units/Unit.h"
#include "../Attack/WerewolfAttack.h"
#include "../State/State.h"

class Werewolf : public Unit {
    private:
        Attack* attackMetod;
    public:
        Werewolf(const std::string& name, int hp, int dmg);
        ~Werewolf();
        
        // void changeState();
        void attack(Unit* enemy);
        void takeMagicDamage(int dmg);
};

#endif //WEREWOLF_H
