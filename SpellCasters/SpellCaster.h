#ifndef SPELLCASTER_H
#define SPELLCASTER_H

#include <iostream>
#include "../Units/Unit.h"
#include "../Spells/Spell.h"
#include "../Spells/SpellBook.h"
#include "../Spells/FireBall.h"
#include "../Spells/Heal.h"
#include "../Attack/PhysicalAttack.h"

class SpellBook;

class SpellCaster : public Unit {
    protected:
        int mana;
        int manaLimit;
        SpellBook* spellBook;
        Spell* spell;
    public:
        
        SpellCaster(const std::string& name, int hitPoints, int damage, int mana);
        virtual ~SpellCaster();

        int getMana() const;
        int getManaLimit() const;
        

        void addMana(int extra);
        void spendMana(int extra);
        void attack(Unit* enemy);
        void cast(Unit* target, std::string spellName);
};

std::ostream& operator<<(std::ostream& out, const SpellCaster& sp);

#endif //SPELLCASTER_H
