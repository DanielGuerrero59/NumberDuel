#pragma once 

/**
 * @file Player.hpp
 * @author [Daniel Guerrero]
 * @date [2/14/26]
 * @brief This file contains the declaration of the Player class, 
 * representing a players HP, attacks, and abilities.
 */


class Player { 

public: 

Player();

int attackQuick(); 

int attackHeavy(); 

int heal(); 

void takeDamage(int damage);

bool isAlive(); 




private: 
int health; 












};