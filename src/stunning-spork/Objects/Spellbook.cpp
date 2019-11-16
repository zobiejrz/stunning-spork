//
//  Spellbook.cpp
//  stunning-spork
//
//  Created by Ben Zobrist on 11/16/19.
//  Copyright © 2019 zobiejrz. All rights reserved.
//

#include "Spellbook.hpp"
#include "Spell.hpp"
#include <vector>

Spellbook::Spellbook() {
    
}

void Spellbook::AddToKnownSpells(Spell spell) {
    this->knownSpells.push_back(spell);
}
void Spellbook::RemoveFromKnownSpells(int index) {
    this->knownSpells.erase(knownSpells.begin()+index);
}

void Spellbook::AddToPreparedSpells(Spell spell) {
    this->preparedSpells.push_back(spell);
}
void Spellbook::RemoveFromPreparedSpells(int index) {
    this->preparedSpells.erase(preparedSpells.begin()+index);
}

int Spellbook::GetSpellSlots() {
    return this->spellSlots;
}

void Spellbook::SetSpellSlotS(int num) {
    this->spellSlots = num;
}
