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

enum Subclasses {
    NONE,
    BARB_Frenzy,
    BARB_Totem,
    BARD_Lore,
    BARD_Valor,
    CLERIC_Knowledge,
    CLERIC_Life,
    Cleric_Light,
    CLERIC_Nature,
    CLERIC_Tempest,
    CLERIC_Trickery,
    CLERIC_War,
    DRUID_Land,
    DRUID_Moon,
    FIGHTER_Champion,
    FIGHTER_Master,
    FIGHTER_Eldritch,
    MONK_Hand,
    MONK_Shadow,
    MONK_Elements,
    PALADIN_Devotion,
    PALADIN_Ancients,
    PALADIN_Vengence,
    RANGER_Hunter,
    RANGER_Beast,
    ROGUE_Thief,
    ROGUE_Assassin,
    ROGUE_Trickster,
    SORCERER_Dragon,
    SORCERER_Wild,
    WARLOCK_Archfey,
    WARLOCK_Fiend,
    WARLOCK_Old,
    WIZARD_Abjuration,
    WIZARD_Conjuration,
    WIZARD_Divination,
    WIZARD_Enchantment,
    WIZARD_Evocation,
    WIZARD_Illusion,
    WIZARD_Necromancy,
    WIZARD_Transmutation,
};

class Profession {
  
public:
    Profession(std::string name, Subclasses subclass);
    ProfessionType GetType();
    void SetType(ProfessionType type);
    std::string GetTypeStr();
    void SetTypeStr(std::string typeStr);
    Subclasses GetSubclass();
    void SetSubclass(Subclasses subclass);
    
private:
    ProfessionType type;
    Subclasses subclass;
    
};

#endif /* Profession_hpp */
