//
//  Spell.hpp
//  stunning-spork
//
//  Created by Ben Zobrist on 11/16/19.
//  Copyright © 2019 zobiejrz. All rights reserved.
//

#ifndef Spell_hpp
#define Spell_hpp

#include <stdio.h>
#include <string>

class Spell {
public:
    Spell(std::string name = "none", std::string description = "none");
    void SetName(std::string name);
    std::string GetName();
    void SetDescription(std::string description);
    std::string GetDescription();
    
private:
    std::string name;
    std::string description;

};
#endif /* Spell_hpp */
