#include "Vampire.h"

Vampire::Vampire(const std::string& name, int hp, int dmg) 
        : Unit(name, hp, dmg, mana) {
            this->isUndead = true;
            this->attackMetod = new VampireAttack(damage, this);
        }
        
Vampire::~Vampire() {}

void Vampire::attack(Unit* enemy) {
    std::cout << this->getName() << " attack " << enemy->getName() << " for " << this->getDamage() << " damage." << std::endl;
    attackMetod->attack(enemy);
    enemy->counterAttack(this);
}
void Vampire::counterAttack(Unit* enemy) {
    Unit::counterAttack(enemy);
    this->lifeLeech(enemy, this);
}

void Vampire::lifeLeech(Unit* victim, Unit* self) {
    Unit::addHitPoints(victim->getHitPoints()/10);
}
