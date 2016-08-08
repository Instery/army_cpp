#include "VampireAttack.h"

VampireAttack::VampireAttack(int damage, Unit* self) {
    this->damage = damage;
    this->self = self;
}
VampireAttack::~VampireAttack() {}

void VampireAttack::attack(Unit* target) {
    target->takeDamage(damage);
    if ( target->getIsUndead() != true ) {
        this->lifeLeech(target, self);
    }
    if ( (target->getIsUndead() != true) && (target->getIsWolf() != true) ) {
        target->setIsUndead(true);
        std::cout << "is now infected >>> " << target->getName() << std::endl;
        target->state = new State(target->name+"(Turned vampire)", target->hitPoints, target->damage);
        target->attackMetod = new VampireAttack(damage, target);
        target->current = target->state;
        target->name = target->current->name;
        target->hitPoints = target->current->hitPoints;
        target->damage = target->current->damage;
    }
}

void VampireAttack::lifeLeech(Unit* victim, Unit* self) {
    self->addHitPoints(victim->getHitPoints()/10);
}
