#ifndef PRIEST_H
#define PRIEST_H

#include <iostream>
#include "SpellCaster.h"


class Priest : public SpellCaster {
    public:
        Priest(const std::string& name, int hitPoints, int damage, int mana);
        ~Priest();
        
        void attack(Unit* enemy);
};

#endif //PRIEST_H
