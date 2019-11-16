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
    Player(std::string name, int level, int race, int profession, int background, int subclass);
    std::string GetName();
    void SetName(std::string name);
    int GetLevel();
    void SetLevel(int level);
    
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
