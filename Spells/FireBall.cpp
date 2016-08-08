#include "FireBall.h"

FireBall::FireBall() {
    this->spellName = "FIREBALL";
}
FireBall::~FireBall() {}

void FireBall::action(Unit* target, Unit* self) {
    int magicDamage = actionPoints;
    if ( self->isHealerMage == 1 ) {
        magicDamage /= 2;
    }
    target->takeMagicDamage(magicDamage);
    std::cout << "BANG!" << std::endl;
}
