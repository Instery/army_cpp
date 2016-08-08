#ifndef WARLOCK_H
#define WARLOCK_H

#include <iostream>
#include "SpellCaster.h"
#include "../Units/Demon.h"

class Demon;

class Warlock : public SpellCaster {
    private:
        Demon* slave;
    public:
        Warlock(const std::string& name, int hitPoints, int damage, int mana);
        ~Warlock();
        
        void summonSlave();
        void freeSlave();
        void setSlave(Demon* demon);
        Demon* demon();
};

#endif //WARLOCK_H
