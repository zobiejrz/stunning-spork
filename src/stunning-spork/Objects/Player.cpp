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

    
Player::Player (std::string name, int level, int race, int background, std::string type, Subclasses subclass) {
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
