#ifndef DEMON_H
#define DEMON_H

#include <iostream>
#include "Unit.h"
#include "../SpellCasters/Warlock.h"
#include "Soldier.h"

class Warlock;

class Demon : Soldier {
    private:
        Warlock* master;
    public:
        Demon(const std::string& name = "Demon-slave", int hitPoints = 200, int damage = 50);
        ~Demon();
        
        const void Howl(Unit* targe);
};

#endif //DEMON_H
