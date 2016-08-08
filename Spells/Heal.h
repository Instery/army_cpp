#ifndef HEAL_H
#define HEAL_H

#include <iostream>
#include "Spell.h"

class Heal : public Spell {
    public:
        Heal();
        virtual ~Heal();
        
        virtual void action(Unit* target, Unit* self);
};

#endif //HEAL_H
