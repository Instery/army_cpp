#ifndef NECROMANCER_H
#define NECROMANCER_H 

#include <iostream>
#include "SpellCaster.h"
// #include "../Spells/VampiricTouch.h"

class Necromancer : public SpellCaster {
    public:
        Necromancer(const std::string& name, int hitPoints, int damage, int mana);
        ~Necromancer();

        void takeDamage(int dmg);
        void cast(Unit* target, std::string spellName);
};

#endif //NECROMANCER_H
