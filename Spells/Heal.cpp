#include "Heal.h"

Heal::Heal() {
    this->spellName = "HEAL";
    this->actionPoints = 30;
}
Heal::~Heal() {}

void Heal::action(Unit* target, Unit* self) {
    int magicDamage = actionPoints;
    if ( self->isBattleMage == 1 ) {
        magicDamage /= 2;
    }
    target->addHitPoints(magicDamage);
    std::cout << "target healed!" << std::endl;
}
