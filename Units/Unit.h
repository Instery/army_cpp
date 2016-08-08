#ifndef UNIT_H
#define UNIT_H

#include <iostream>
#include "../State/State.h"
#include "../Attack/Attack.h"
#include "../exception.h"
#include "../interfaces/Observer.h"
#include "../interfaces/Observable.h"

class Attack;
class State;

class Unit : public Observer, public Observable {
    protected:
        void ensureIsAlive();
        bool isUndead;
        bool isWolf;
    public:
        int damage;
        int hitPoints;
        int hitPointsLimit;
        int mana;
        bool isBattleMage;
        bool isHealerMage;
        std::string name;
        State* state;
        State* alterState;
        State* current;
        Attack* attackMetod;
        
        Unit(const std::string& name, int hp, int dmg, int mana);
        virtual ~Unit();

        int getIsWolf() const;
        int getIsUndead() const;
        int getDamage() const;
        int getHitPoints() const;
        int getHitPointsLimit() const;
        const std::string& getName() const;
        
        int setIsWolf(bool value);
        int setIsUndead(bool value);
        

        virtual void addHitPoints(int hp);
        virtual void takeDamage(int dmg);
        virtual void takeMagicDamage(int dmg);

        virtual void attack(Unit* enemy);
        virtual void counterAttack(Unit* enemy);
        virtual void changeState();
        
        virtual void sendNotification();
        virtual void notify();
};

std::ostream& operator<<(std::ostream& out, const Unit& unit);

#endif //UNIT_H


