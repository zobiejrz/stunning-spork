//
//  Player.cpp
//  stunning-spork
//
//  Created by Ben Zobrist on 11/16/19.
//  Copyright © 2019 zobiejrz. All rights reserved.
//

#include "Player.hpp"
#include "Profession.hpp"
#include <string>
#include "Race.cpp"

<<<<<<< HEAD
<<<<<<< HEAD
<<<<<<< HEAD
Player::Player (std::string name, int level, int race, int profession, int background, int subclass) {
=======
    
Player::Player (std::string name, int level, int race, int background, std::string type, Subclasses subclass) {
>>>>>>> d00c239dc2b5b9d41126899922fa9a44c307e15a
=======
    
Player::Player (std::string name, int level, int race, int background, std::string type, Subclasses subclass) {
>>>>>>> d00c239dc2b5b9d41126899922fa9a44c307e15a
=======
    
Player::Player (std::string name, int level, int race, int background, std::string type, Subclasses subclass) {
>>>>>>> d00c239dc2b5b9d41126899922fa9a44c307e15a
    this->name = name;
    this->level = level;
    this->race = race;
    Profession newProfession(type, subclass);
    this->profession() = newProfession;
    this->background = background;
}

std::string Player::GetName() {
    return this->name;
}
void Player::SetName(std::string name) {
    this->name = name;
}

int Player::GetLevel() {
    return this->level;
}
void Player::SetLevel(int level) {
    this->level = level;
}

Race Player::race() {
    return this->race;
}
void Player::SetRace(Race race) {
    this->race = race;
}

Profession Player::profession() {
    return this->profession;
}
void Player::SetProfession(Profession profession) {
    this->profession = profession;
}

std::string PrintRace(Race race)
{
  std::string output
  switch(race)
  {
    case HillDwarf:
    output = "Hill Dwarf":
    break;
    case MountainDwarf:
    output = "Mountain Dwarf":
    break;
    case HighElf:
    output = "High Elf":
    break;
    case WoodElf:
    output = "Wood Elf":
    break;
    case Drow:
    output = "Drow":
    break;
    case LightHalf:
    output = "Lightfoot Halfling":
    break;
    case StoutHalf:
    output = "Stout Halfling":
    break;
    case Human:
    output = "Human":
    break;
    case BlackDragonborn:
    output = "Black Dragonborn":
    break;
    case BlueDragonborn:
    output = "Blue Dragonborn":
    break;
    case BrassDragonborn:
    output = "Brass Dragonborn":
    break;
    case BronzeDragonborn:
    output = "Bronze Dragonborn":
    break;
    case CopperDragonborn:
    output = "Copper Dragonborn":
    break;
    case GoldDragonborn:
    output = "Gold Dragonborn":
    break;
    case GreenDragonborn:
    output = "Green Dragonborn":
    break;
    case RedDragonborn:
    output = "Red Dragonborn":
    break;
    case SilverDragonborn:
    output = "Silver Dragonborn":
    break;
    case WhiteDragonborn:
    output = "White Dragonborn":
    break;
    case HalfOrc:
    output = "Half Orc":
    break;
    case HalfElf:
    output = "Half Elf":
    break;
    case ForestGnome:
    output = "Forest Gnome":
    break;
    case RockGnome:
    output = "Rock Gnome":
    break;
    case Tiefling:
    output = "Tiefling":
    break;
  }
  return output;
}
