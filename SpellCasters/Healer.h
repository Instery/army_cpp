#ifndef HEALER_H
#define HEALER_H

#include <iostream>
#include "SpellCaster.h"

class Healer : public SpellCaster {
    public:
        Healer(const std::string& name, int hitPoints, int damage, int mana);
        ~Healer();
};

#endif //HEALER_H
