#include "Berserker.h"

Berserker::Berserker(const std::string& name, int hp, int dmg) 
        : Unit(name, hp, dmg, mana) 
        
        {
            this->attackMetod = new PhysicalAttack(this->damage);
            
        }
        
Berserker::~Berserker() {}
        
void Berserker::takeMagicDamage(int dmg) {
    dmg = 0;
    std::cout << "Berserker resist's magic damage!" << std::endl;
}

void Berserker::attack(Unit* enemy) {
    Unit::attack(enemy);
}
