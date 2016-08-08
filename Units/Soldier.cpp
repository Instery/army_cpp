#include "Soldier.h"

Soldier::Soldier(const std::string& name, int hitPoints, int damage) 
        : Unit(name, hitPoints, damage, mana) {
            this->attackMetod = new PhysicalAttack(this->damage);
        }

Soldier::~Soldier() {}
