#include "Player.hpp"
#include <iostream> 
#include <ctime> 
#include <cstdlib> 


int main() { 
// player
Player myPlayer; 

// CPU going against player
Player CPU_Player; 

int CPU_turns = 0; 
int CPU_Randomizer;
// Loop that ends if any one of the players faints
while(myPlayer.isAlive() && CPU_Player.isAlive()) { 

    std::cout << "\nYour Health is at: " << myPlayer.getHealth() << std::endl; 

    std::cout << "Your opponents health is at: " <<  CPU_Player.getHealth() << std::endl;

// Little Menu 
std::cout << "\n===== Your Turn =====\n";
std::cout << "1. Quick Attack (10-15 damage, always hits)\n";
std::cout << "2. Heavy Attack (20-30 damage, 50% chance to miss)\n";
std::cout << "3. Heal (restore 10-20 HP)\n";
std::cout << "Choose an option: "; 

int choice; 
std::cin >> choice; 

// switch statement that leads to various paths dependent on users input
switch(choice)  { 
    case 1: 
   CPU_Player.takeDamage(myPlayer.attackQuick()); 
   std::cout << "You did " << myPlayer.attackQuick() << " damage to your opponent!" << std:: endl; 
   break;
   
   case 2: 
   CPU_Player.takeDamage(myPlayer.attackHeavy()); 
   std::cout << "You did " << myPlayer.attackHeavy() << " damage to your opponent!" << std:: endl; 
   break;

    case 3: 
    std::cout << "Your health is now at " << myPlayer.heal() << " HP" << std::endl; 
    break;

    default: 
    std:: cout << "INVALID COMMAND" << std::endl; 
    break;
}

// system for CPU TO CHOOSE BETWEEN 1 AND 3, but eliminate heal on its very first move 

CPU_Randomizer = rand() % 3 + 1; 
if(CPU_turns == 0) { 
    CPU_Randomizer = rand() % 2 + 1; 
}

switch(CPU_Randomizer) { 
    case 1: 
   myPlayer.takeDamage(CPU_Player.attackQuick()); 
   std::cout << "CPU inflicted " << CPU_Player.attackQuick() << " damage to you!" << std:: endl; 
   break;
   
   case 2: 
   myPlayer.takeDamage(CPU_Player.attackHeavy()); 
   
   break;

    case 3: 
    CPU_Player.heal();
    std::cout << "Your opponents health is now at " << CPU_Player.heal() << " HP" << std::endl; 
    break;

    default: 
    std:: cout << "INVALID COMMAND" << std::endl; 
    break;
}
CPU_turns++;
}

std:: cout << "THANK YOU FOR PLAYING!" << std::endl;
}