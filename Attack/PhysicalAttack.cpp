#include "PhysicalAttack.h"

PhysicalAttack::PhysicalAttack(int damage) {
    this->damage = damage;
}
PhysicalAttack::~PhysicalAttack() {}

void PhysicalAttack::attack(Unit* target) {
    target->takeDamage(damage);
}
