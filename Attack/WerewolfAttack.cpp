#include "WerewolfAttack.h"

WerewolfAttack::WerewolfAttack(int damage) {
    this->damage = damage;
}
WerewolfAttack::~WerewolfAttack() {}

void WerewolfAttack::attack(Unit* target) {
    target->takeDamage(damage);
    if ( (target->getIsUndead() != true) && (target->getIsWolf() != true) ) {
        target->setIsWolf(true);
        std::cout << "is now infected >>> " << target->getName() << std::endl;
        target->state = new State(target->name+"(Turned "+target->name+")", target->hitPoints, target->damage);
        target->alterState = new State(target->name+"(Turned Wolf)", target->hitPoints+80, target->damage+40);
        target->attackMetod = new WerewolfAttack(damage);
        target->current = target->state;
        target->name = target->current->name;
        target->hitPoints = target->current->hitPoints;
        target->damage = target->current->damage;
    }
}
