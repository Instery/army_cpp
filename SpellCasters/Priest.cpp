#include "Priest.h"

Priest::Priest(const std::string& name, int hitPoints, int damage, int mana) : SpellCaster(name, hitPoints, damage, mana) {
    spellBook = new SpellBook();
    spellBook->addSpell("HEAL", new Heal());
    spellBook->addSpell("FIREBALL", new FireBall());
    this->isHealerMage = true;
}

Priest::~Priest() {}

void Priest::attack(Unit* enemy) {
    if ( enemy->getIsUndead() ) {
        enemy->takeDamage(damage*2);
        std::cout << this->getName() << " attack " << enemy->getName() << " for " << this->getDamage() << " damage." << std::endl;
        
    } else {
        enemy->takeDamage(damage);
        std::cout << this->getName() << " attack " << enemy->getName() << " for " << this->getDamage() << " damage." << std::endl;
        
    }
    enemy->counterAttack(this);
}

void Priest::attack(Unit* enemy) {
    if ( enemy->isUndead ) {
        this->damage *= 20;
    }
    Unit::attack(enemy);
}

