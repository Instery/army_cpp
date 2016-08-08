#ifndef STATE_H
#define STATE_H

#include <iostream>

class State {
    public:
        std::string name;
        int hitPoints;
        int hitPointsLimit;
        int damage;
        State(const std::string& name, int hitPoints, int damage);
        ~State();
        
        int getDamage() const;
        int getHitPoints() const;
        int getHitPointsLimit() const;
        const std::string& getName() const;
        
        
};

#endif //STATE_H
