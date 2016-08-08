#include "Healer.h"

Healer::Healer(const std::string& name, int hitPoints, int damage, int mana) : SpellCaster(name, hitPoints, damage, mana) {
    spellBook = new SpellBook();
    spellBook->addSpell("HEAL", new Heal());
    spellBook->addSpell("FIREBALL", new FireBall());
    this->isHealerMage = true;
}

Healer::~Healer() {}
