#include <iostream>
#include "Units/Berserker.h"
#include "Units/Unit.h"
#include "Units/Soldier.h"
#include "Units/Rogue.h"
#include "Units/Vampire.h"
#include "Units/Werewolf.h"
#include "Units/Demon.h"
#include "SpellCasters/Healer.h"
#include "SpellCasters/Wizard.h"
#include "SpellCasters/Priest.h"
#include "SpellCasters/Warlock.h"
#include "SpellCasters/Necromancer.h"

int main() {
    Soldier* s1 = new Soldier("Soldier1", 200, 25);
    Berserker* b1 = new Berserker("Berserker1", 220, 20);
    Soldier* s2 = new Soldier("Soldier2", 180, 25);
    // Soldier* s3 = new Soldier("Soldier3", 180, 25);
    Rogue* r1 = new Rogue("Rogue", 180, 25);
    Werewolf* w1 = new Werewolf("Werewolf", 220, 20);
    Vampire* v1 = new Vampire("Vampire", 150, 10);
    Wizard* wi1 = new Wizard("Wizard", 110, 100, 110);
    Priest* p1 = new Priest("Priest", 120, 5, 150);
    Necromancer* n1 = new Necromancer("Necr", 120, 5, 150);
    Healer* h1 = new Healer("Healer", 120, 5, 150);

    std::cout << *s1 << std::endl;
    // std::cout << *s2 << std::endl;
    // std::cout << *s3 << std::endl;
    // std::cout << *r1 << std::endl;
    // std::cout << *w1 << std::endl;
    // std::cout << *v1 << std::endl;
    // std::cout << *b1 << std::endl;
    // std::cout << *wi1 << std::endl;
    // std::cout << *p1 << std::endl;
    // std::cout << *h1 << std::endl;
    
    std::cout << "-------start-battle--------" << std::endl;
    
    
    
    std::cout << "---------end-battle--------" << std::endl;
    
    
    std::cout << *s1 << std::endl;
    // std::cout << *s2 << std::endl;
    // std::cout << *s3 << std::endl;
    // std::cout << *r1 << std::endl;
    // std::cout << *w1 << std::endl;
    // std::cout << *v1 << std::endl;
    // std::cout << *b1 << std::endl;
    // std::cout << *wi1 << std::endl;
    // std::cout << *p1 << std::endl;
    // std::cout << *n1 << std::endl;
    // std::cout << *h1 << std::endl;

    delete s1;
    delete s2;
    // delete s3;
    delete r1;
    delete w1;
    delete v1;
    delete b1;
    delete wi1;
    delete p1;
    delete n1;
    delete h1;

    return 0;
}
