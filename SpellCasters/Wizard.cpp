#include "Wizard.h"

Wizard::Wizard(const std::string& name, int hitPoints, int damage, int mana)
    : SpellCaster(name, hitPoints, damage, mana) {
        spellBook = new SpellBook();
        spellBook->addSpell("FIREBALL", new FireBall());
        spellBook->addSpell("HEAL", new Heal());
        this->isBattleMage = true;
    }

Wizard::~Wizard() {}
