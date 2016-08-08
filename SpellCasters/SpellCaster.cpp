#include "SpellCaster.h"

SpellCaster::SpellCaster(const std::string& name, int hitPoints, int damage, int mana) 
        : Unit(name, hitPoints, damage, mana), mana(mana), manaLimit(mana) {
        this->attackMetod = new PhysicalAttack(this->damage);
}
SpellCaster::~SpellCaster() {
    delete spellBook;
}

int SpellCaster::getMana() const {
    return this->mana;
}
int SpellCaster::getManaLimit() const {
    return this->manaLimit;
}

void SpellCaster::addMana(int extra) {
    ensureIsAlive();
    int total = this->getMana() + extra;
    
    if ( total > this->getManaLimit() ) {
        this->mana = this->manaLimit;
    }
}
void SpellCaster::spendMana(int extra) {
    ensureIsAlive();
    if ( extra > this->mana ) {
        throw OutOfManaException();
        return;
    }
    this->mana -= extra;
}
void SpellCaster::attack(Unit* enemy) {
    Unit::attack(enemy);
}
void SpellCaster::cast(Unit* target, std::string spellName) {
    ensureIsAlive();
    spendMana(spell->cost());
    std::map<std::string, Spell*> mymap = spellBook->getSpells();
    
    for (std::map<std::string, Spell*>::iterator it=mymap.begin(); it!=mymap.end(); ++it) {
        if ( it->first == spellName ) {
            it->second->action(target, this);
        }
    }
}

std::ostream& operator<<(std::ostream& out, const SpellCaster& sp) {
    out << sp.getName() << " has " << sp.getHitPoints() << "/" << sp.getHitPointsLimit() << " hp, ";
    out << "mana is " << sp.getMana() << "/" << sp.getManaLimit();
    out << ", attack damage is " << sp.getDamage();
    
    return out; 
}

