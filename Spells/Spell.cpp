#include "Spell.h"

int Spell::spellCost = 30;
int Spell::actionPoints = 30;

Spell::Spell() {}
Spell::~Spell() {}

std::string Spell::getSpellName() const{
    return this->spellName;
}

int Spell::cost() const {
    return spellCost;
}
