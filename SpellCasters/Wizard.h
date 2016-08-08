#ifndef WIZARD_H
#define WIZARD_H

#include <iostream>
#include "SpellCaster.h"

class Wizard : public SpellCaster {
    public:
        Wizard(const std::string& name, int hitPoints, int damage, int mana);
        ~Wizard();
};

#endif //WIZARD_H
