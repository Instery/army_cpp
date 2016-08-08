#include "Unit.h"

void Unit::ensureIsAlive() {
    if ( hitPoints == 0 ) {
        throw UnitIsDeadException();
    }
}

Unit::Unit(const std::string& name, int hp, int dmg, int mana = 0) {
    this->name = name;
    this->hitPoints = hp;
    this->hitPointsLimit = hp;
    this->damage = dmg;
    this->isUndead = false;
    this->isWolf = false;
}
Unit::~Unit() {}


int Unit::getIsWolf() const {
    return this->isWolf;
}
int Unit::getIsUndead() const {
    return this->isUndead;
}

int Unit::getDamage() const {
    return this->damage;
}
int Unit::getHitPoints() const {
    return this->hitPoints;
}
int Unit::getHitPointsLimit() const {
    return this->hitPointsLimit;
}
const std::string& Unit::getName() const {
    return this->name;
}
int Unit::setIsWolf(bool value) {
    return this->isWolf = value;
}
int Unit::setIsUndead(bool value) {
    return this->isUndead = value;
}

void Unit::addHitPoints(int hp) {
    ensureIsAlive();
    int total = hitPoints + hp;
    
    if ( total > hitPointsLimit ) {
        this->hitPoints = hitPointsLimit;
        return;
    }
    this->hitPoints += hp;
    
}
void Unit::takeMagicDamage(int dmg) {
    takeDamage(dmg);
}

void Unit::takeDamage(int dmg) {
    ensureIsAlive();
    if ( dmg > this->hitPoints ) {
        this->hitPoints = 0;
        return;
    }
    this->hitPoints -= dmg;
}

void Unit::attack(Unit* enemy) {
    // enemy->takeDamage(damage);
    enemy->ensureIsAlive();
    attackMetod->attack(enemy);
    std::cout << this->getName() << " attack " << enemy->getName() << " for " << this->getDamage() << " damage." << std::endl;
    if ( enemy->hitPoints > 0 ) {
        enemy->counterAttack(this);
    }
}
void Unit::counterAttack(Unit* enemy) {
    enemy->takeDamage(damage/2);
    std::cout << this->getName() << " counter-attack " << enemy->getName() << " for " << this->damage/2 << " damage." << std::endl;
}
void Unit::changeState() {
    if ( this->isWolf ) {
        ensureIsAlive();
        current->hitPoints = this->hitPoints;
        if ( current == state ) {
            current = alterState;
            std::cout << "transfroming" << std::endl;
        } else {
            current = state;
            std::cout << "transfroming" << std::endl;
        }
        double coef = (double)alterState->hitPoints / (double)alterState->hitPointsLimit;
        this->hitPoints = (int)((double)this->hitPointsLimit * coef);
        this->name = current->name;
        // this->hitPoints = current->hitPoints;
        this->hitPointsLimit = current->hitPointsLimit;
        this->damage = current->damage;
    }
}
    
void Unit::sendNotification() {
    std::set<Observable*>::iterator it = observables.begin();
    for ( ; it != observables.end(); it++ ) {
        (*it)->removeObserver(this);
    }
}

void Unit::notify() {
    std::set<Observer*>::iterator it = observers.begin();
    for ( ; it != observers.end(); it++ ) {
        ((Unit*)(*it))->addHitPoints(hitPointsLimit/10);
        (*it)->removeObservable(this);
    }
}
    
std::ostream& operator<<(std::ostream& out, const Unit& unit) {
    
    out << unit.getName() << " has " << unit.getHitPoints() << "/" << unit.getHitPointsLimit();
    out << " hp" << ", attack damage is " << unit.getDamage();
    out << ", || is wolf = " << unit.getIsWolf();
    out << ", || is vamp = " << unit.getIsUndead();
    
    return out;
}
