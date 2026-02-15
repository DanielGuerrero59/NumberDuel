#include "Player.hpp"
#include <iostream> 
#include <random>

Player::Player() : health(100) {}



int Player::attackQuick() { 
    int randomizer = rand() % 6 + 10;  // sends a random number from 0-5, then add 10 to range 10-15
    return randomizer;
}



int Player::attackHeavy() { 
    if(rand() % 2 == 0) {  // 50% chance, if random number is divisible by 2 then player can inflict dmg 
        return rand() % 11 + 20;  // return a random number from 20-30 
    }
    else { 
        return 0;
    }
}