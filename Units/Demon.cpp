#include "Demon.h"

Demon::Demon(const std::string& name, int hitPoints, int damage) : Soldier(name, hitPoints, damage) {
    // this->master = master;
    master->setSlave(this);
}
Demon::~Demon() {
    master = NULL;
}

const void Demon::Howl(Unit* target) {
    target->damage -= 15;
}
