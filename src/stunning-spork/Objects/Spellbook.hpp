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
class Spellbook {
  
public:
    Spellbook();
    void AddToKnownSpells(Spell spell);
    void RemoveFromKnownSpells();
    void AddToPreparedSpells(Spell spell);
    void RemoveFromPreparedSpells();
    void SetSpellSlots(int spellSlots);
    int GetSpellSlots();
    
private:
    std::vector<Spell> knownSpells;
    std::vector<Spell> preparedSpells;
    int spellSlots;
};
#endif /* Spellbook_hpp */
