#ifndef SPELL_H
#define SPELL_H

#include <iostream>
#include "../Units/Unit.h"
#include "SpellBook.h"



class SpellBook;

class Spell {
    protected:
        static int spellCost;
        static int actionPoints;
        std::string spellName;
        SpellBook* spellbook;

    public:
        Spell();
        virtual ~Spell();

        virtual std::string getSpellName() const;
        int cost() const;

        virtual void action(Unit* target, Unit* self) = 0;
};

#endif //SPELL_H
