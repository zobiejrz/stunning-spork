//
//  Profession.hpp
//  stunning-spork
//
//  Created by Ben Zobrist on 11/16/19.
//  Copyright © 2019 zobiejrz. All rights reserved.
//

#ifndef Profession_hpp
#define Profession_hpp

#include <stdio.h>
#include <string>
enum ProfessionType {
    
    ERROR,
    Barbarian,
    Bard,
    Cleric,
    Druid,
    Fighter,
    Monk,
    Paladin,
    Ranger,
    Rogue,
    Sorcerer,
    Warlock,
    Wizard
};

class Profession {
  
public:
    Profession(std::string name, Subclass subclass);
    ProfessionType GetType();
    void SetType(ProfessionType type);
    std::string GetTypeStr();
    void SetTypeStr(std::string typeStr);
    
private:
    ProfessionType type;
    Subclass subclass;
    
    
};

#endif /* Profession_hpp */
