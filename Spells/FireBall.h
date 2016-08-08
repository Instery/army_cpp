#ifndef FIREBALL_H
#define FIREBALL_H

#include <iostream>
#include "Spell.h"

class FireBall : public Spell {
    public:
        FireBall();
        ~FireBall();
        
        virtual void action(Unit* target, Unit* self);
};

#endif //FIREBALL_H
