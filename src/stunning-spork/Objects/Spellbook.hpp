//
//  Spellbook.hpp
//  stunning-spork
//
//  Created by Ben Zobrist on 11/16/19.
//  Copyright © 2019 zobiejrz. All rights reserved.
//

#ifndef Spellbook_hpp
#define Spellbook_hpp

#include <stdio.h>
#include <vector>
#include "Spell.hpp"

class Spellbook {
  
public:
    Spellbook();
    void AddToKnownSpells(Spell spell);
    void RemoveFromKnownSpells(int index);
    void AddToPreparedSpells(Spell spell);
    void RemoveFromPreparedSpells(int index);
    void SetSpellSlots(int spellSlots);
    int GetSpellSlots();
    void SetSpellSlotS(int num);
    
private:
    std::vector<Spell> knownSpells;
    std::vector<Spell> preparedSpells;
    int spellSlots;
};
#endif /* Spellbook_hpp */
