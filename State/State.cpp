#include "State.h"

State::State(const std::string& name, int hitPoints, int damage) {
    this->name = name;
    this->hitPoints = hitPoints;
    this->hitPointsLimit = hitPoints;
    this->damage = damage;
    
};
State::~State() {};

int State::getDamage() const {
    return this->damage;
}
int State::getHitPoints() const {
    return this->hitPoints;
}
int State::getHitPointsLimit() const {
    return this->hitPointsLimit;
}
const std::string& State::getName() const {
    return this->name;
}
