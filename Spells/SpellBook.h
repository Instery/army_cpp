#ifndef SPELLBOOK_H
#define SPELLBOOK_H

#include <iostream>
#include <map>
#include "Spell.h"
// #include "FireBall.h"

enum SpellType {
    FIREBALL,
    HEAL
};


class Spell;

class SpellBook {
    private:
        std::string spellName;
    public:
        std::map<std::string, Spell*>* spells;
        SpellBook();
        ~SpellBook();

        // const std::string& getName() const;
        // const std::map<Spell*>* getSpells() const;

        // void addSpell(Spell* newSpell);
        // void removeSpell(Spell* oldSpell);
        // const std::string& getCategoryName() const;
        const std::map<std::string, Spell*> getSpells() const;
        
        // void getSpell(int spell);
        void addSpell(std::string spellName, Spell* newSpell);
        // void removeSpell(std::string spellName, Spell* oldSpell);
};

// std::ostream& operator<<(std::ostream& out, const SpellBook& spb);

#endif //SPELLBOOK_H
