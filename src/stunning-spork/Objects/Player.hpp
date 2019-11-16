//
//  Player.hpp
//  stunning-spork
//
//  Created by Ben Zobrist on 11/16/19.
//  Copyright © 2019 zobiejrz. All rights reserved.
//

#ifndef Player_hpp
#define Player_hpp

#include <stdio.h>
#include <string>

#include "Profession.hpp"
#include "Spellbook.hpp"
#include "Race.hpp"

class Player {
public:
    Player(std::string name = "none", int level = 0, Race race = Race::Human, int background = 0, std::string type = "none", Subclasses subclass = Subclasses::NONE);
    std::string GetName();
    void SetName(std::string name);
    int GetLevel();
    void SetLevel(int level);
    Race GetRace();
    void SetRace(Race race);
    std::string PrintRace();
    Profession GetProfession();
    void SetProfession(Profession profession);
    
private:
/*
 * These are the variables we input
 */
    std::string name;
    int level;
    Race race;
    Profession profession;
    Background background;

/*
 * These are the variables we calculate
 */
    Spellbook spellbook;
    Inventory inv;
    Skills skills;
    Abilities abilities;

};

#endif /* Player_hpp */
