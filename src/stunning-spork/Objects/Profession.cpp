//
//  Profession.cpp
//  stunning-spork
//
//  Created by Ben Zobrist on 11/16/19.
//  Copyright © 2019 zobiejrz. All rights reserved.
//

#include "Profession.hpp"
Profession::Profession(std::string name, Subclasses subclass) {
    ProfessionType type;
    if (name == "barbarian") {
        type = ProfessionType::Barbarian;
    }
    else if (name == "bard"){
        type = ProfessionType::Bard;
    }
    else if (name == "cleric"){
        type = ProfessionType::Cleric;
    }
    else if (name == "druid"){
        type = ProfessionType::Druid;
    }
    else if (name == "fighter"){
        type = ProfessionType::Fighter;
    }
    else if (name == "monk"){
        type = ProfessionType::Monk;
    }
    else if (name == "paladin"){
        type = ProfessionType::Paladin;
    }
    else if (name == "ranger"){
        type = ProfessionType::Ranger;
    }
    else if (name == "rogue"){
        type = ProfessionType::Rogue;
    }
    else if (name == "sorcerer"){
        type = ProfessionType::Sorcerer;
    }
    else if (name == "warlock"){
        type = ProfessionType::Warlock;
    }
    else if (name == "wizard"){
        type = ProfessionType::Wizard;
    }

    this->type = type;
    this->subclass = subclass;
}

ProfessionType Profession::GetType() {
    return this->type;
}
void Profession::SetType(ProfessionType type) {
    this->type = type;
}

std::string Profession::GetTypeStr() {
    std::string output;
    switch(this->type) {
        case Barbarian:
            output = "Barbarian";
            break;
        case Bard:
            output = "Bard";
            break;
        case Cleric:
            output = "Cleric";
            break;
        case Druid:
            output = "Druid";
            break;
        case Fighter:
            output = "Fighter";
            break;
        case Monk:
            output = "Monk";
            break;
        case Paladin:
            output = "Paladin";
            break;
        case Ranger:
            output = "Ranger";
            break;
        case Rogue:
            output = "Rogue";
            break;
        case Sorcerer:
            output = "Sorcerer";
            break;
        case Warlock:
            output = "Warlock";
            break;
        case Wizard:
            output = "Wizard";
            break;
        default:
            output = "ERROR";
            break;
    }
    return output;
}
void Profession::SetTypeStr(std::string typeStr) {
    ProfessionType type;
    if (typeStr == "barbarian") {
        type = ProfessionType::Barbarian;
    }
    else if (typeStr == "bard"){
        type = ProfessionType::Bard;
    }
    else if (typeStr == "cleric"){
        type = ProfessionType::Cleric;
    }
    else if (typeStr == "druid"){
        type = ProfessionType::Druid;
    }
    else if (typeStr == "fighter"){
        type = ProfessionType::Fighter;
    }
    else if (typeStr == "monk"){
        type = ProfessionType::Monk;
    }
    else if (typeStr == "paladin"){
        type = ProfessionType::Paladin;
    }
    else if (typeStr == "ranger"){
        type = ProfessionType::Ranger;
    }
    else if (typeStr == "rogue"){
        type = ProfessionType::Rogue;
    }
    else if (typeStr == "sorcerer"){
        type = ProfessionType::Sorcerer;
    }
    else if (typeStr == "warlock"){
        type = ProfessionType::Warlock;
    }
    else if (typeStr == "wizard"){
        type = ProfessionType::Wizard;
    }

    this->type = type;
}

Subclasses Profession::GetSubclass() {
    return this->subclass;
}
void Profession::SetSubclass(Subclasses subclass) {
    this->subclass = subclass;
}
