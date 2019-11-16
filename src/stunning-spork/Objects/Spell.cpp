//
//  Spell.cpp
//  stunning-spork
//
//  Created by Ben Zobrist on 11/16/19.
//  Copyright © 2019 zobiejrz. All rights reserved.
//

#include "Spell.hpp"
#include <string>
Spell::Spell(std::string name, std::string description) {
    this->name = name;
    this->description = description;
}

void Spell::SetName(std::string name) {
    this->name = name;
}
std::string Spell::GetName() {
    return this->name;
}

void Spell::SetDescription(std::string description) {
    this->description = description;
}
std::string Spell::GetDescription() {
    return this->description;
}
