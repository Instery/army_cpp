#include "Rogue.h"

Rogue::Rogue(const std::string& name, int hp, int dmg) 
    : Unit(name, hp, dmg, mana) {
        this->attackMetod = new PhysicalAttack(this->damage);
    }
Rogue::~Rogue() {}

void Rogue::attack(Unit* enemy) {
    ensureIsAlive();
    attackMetod->attack(enemy);
    std::cout << this->getName() << " attack " << enemy->getName() << " for " << this->getDamage() << " damage." << std::endl;
}
