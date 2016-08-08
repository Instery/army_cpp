#include "Warlock.h"

Warlock::Warlock(const std::string& name, int hitPoints, int damage, int mana) : SpellCaster(name, hitPoints, damage, mana) {
    spellBook = new SpellBook();
    spellBook->addSpell("FIREBALL", new FireBall());
    spellBook->addSpell("HEAL", new Heal());
    this->isBattleMage = true;
    
}
Warlock::~Warlock() {
    if ( slave != NULL ) {
        delete slave;
    }
}

void Warlock::summonSlave() {
    if ( this->slave == NULL ) {
        this->slave = new Demon("Demon slave", this->hitPointsLimit*2, this->damage+50);
    }
}
void Warlock::freeSlave() {
    this->slave = NULL;
}
void Warlock::setSlave(Demon* demon) {
    slave = demon;
}

Demon* Warlock::demon() {
    if ( slave == NULL ) {
        throw SummonException();
    }
    return slave;
}
