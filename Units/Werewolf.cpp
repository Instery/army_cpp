#include "Werewolf.h"

Werewolf::Werewolf(const std::string& name, int hp, int dmg) 
        : Unit(name, hp, dmg, mana) {
            this->state = new State(name+"(Human)", hitPoints, damage);
            this->alterState = new State(name+"(Wolf)", hitPoints*2, damage*2);
            this->attackMetod = new WerewolfAttack(damage);
            this->isWolf = true;
            this->current = state;
            this->hitPoints = current->hitPoints;
            this->name = current->name;
            this->hitPointsLimit = current->hitPointsLimit;
            this->damage = current->damage; 
        }
Werewolf::~Werewolf() {
    // state = NULL;
    delete state;
    delete alterState;
    delete attackMetod;
}

void Werewolf::attack(Unit* enemy) {
    // enemy->current = state;
    std::cout << this->getName() << " attack " << enemy->getName() << " for " << this->getDamage() << " damage." << std::endl;
    attackMetod->attack(enemy);
    enemy->counterAttack(this);
}
void Werewolf::takeMagicDamage(int dmg) {
    if ( current == alterState ) {
        Unit::takeDamage(dmg*2);
        std::cout << this->getName() << " taking double magic damage!" << std::endl;
    }
}
