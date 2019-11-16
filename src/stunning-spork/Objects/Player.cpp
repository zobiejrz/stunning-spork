//
//  Player.cpp
//  stunning-spork
//
//  Created by Ben Zobrist on 11/16/19.
//  Copyright © 2019 zobiejrz. All rights reserved.
//

#include "Player.hpp"
#include <string>

class Player {
    
    Player (std::string name, int level, int race, int profession, int background, int subclass) {
        this->name = name;
        this->level = level;
        this->race = race;
        this->profession = profession;
        this->background = background;
        this->subclass = subclass;
    }
    
    std::string GetName() {
        return this->name;
    }
    void SetName(std::string name) {
        this->name = name;
    }
    
    int GetLevel() {
        return this->level;
    }
    void SetLevel(int level) {
        this->level = level;
    }
    
    Race race() {
        return this->race;
    }
    void SetRace(Race race) {
        this->race = race;
    }
    
    Profession profession() {
        return this->profession;
    }
    void SetProfession(Profession profession) {
        this->profession = profession;
    }
}
