#include "SpellBook.h"

SpellBook::SpellBook() {
    this->spells = new std::map<std::string, Spell*>();
}
SpellBook::~SpellBook() {}

const std::map<std::string, Spell*> SpellBook::getSpells() const {
    return *spells;
}


void SpellBook::addSpell(std::string name, Spell* newSpell) {
    spells->insert(std::pair<std::string, Spell*>(name, newSpell));
}

// void SpellBook::removeSpell(std::string name, Spell* oldSpell) {
//     // std::string name = oldSpell->getSpellName();
// }
