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

class Player {
public:
    Player(std::string name = "none", int level = 0, int race = 0, int profession = 0, int background = 0, int subclass = 0);
    std::string GetName();
    void SetName(std::string name);
    int GetLevel();
    void GetLevel(int level);
    Race race();
    void SetRace(Race race);
    Profession profession();
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
