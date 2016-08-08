#include "Necromancer.h"

Necromancer::Necromancer(const std::string& name, int hitPoints, int damage, int mana) : SpellCaster(name, hitPoints, damage, mana)
{
    spellBook = new SpellBook();
    spellBook->addSpell("FIREBALL", new FireBall());
    spellBook->addSpell("HEAL", new Heal());
    this->isBattleMage = true;
    this->isUndead = true;
}

void Necromancer::takeDamage(int dmg) {
    ensureIsAlive();
    if ( dmg >= hitPoints ) {
        notify();
        sendNotification();
        hitPoints = 0;
        return;
    }
    hitPoints -= dmg;
}

Necromancer::~Necromancer() {}

void Necromancer::cast(Unit* target, std::string spellName) {
    spendMana(spell->cost());
    addObservable(target);
    std::map<std::string, Spell*> mymap = spellBook->getSpells();
    
    for (std::map<std::string, Spell*>::iterator it=mymap.begin(); it!=mymap.end(); ++it) {
        if ( it->first == spellName ) {
            it->second->action(target, this);
        }
    }
}
