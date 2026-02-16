#include "Player.hpp"
#include <iostream> 
#include <ctime> 
#include <cstdlib> 


int main() { 
    srand(time(0)); // Seeds the randomizer with the current time
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
    case 1: {
    int damage = myPlayer.attackQuick();
    CPU_Player.takeDamage(damage); 
   std::cout << "You did " << damage << " damage to your opponent!" << std:: endl; 
   break;
    }
   case 2: {
   int damage2 = myPlayer.attackHeavy();
   
   if(damage2 > 0) { 
    CPU_Player.takeDamage(damage2); 
    std::cout << "You did " << damage2 << " damage to your opponent!" << std:: endl; 
   }
   else { 
    std::cout << "Your attack missed!" << std::endl;
   }
   break;
   }
    case 3: 
    myPlayer.heal();
    std::cout << "Your health is now at " << myPlayer.getHealth() << " HP" << std::endl; 
    break;

    default: 
    std:: cout << "INVALID COMMAND" << std::endl; 
    break;
}
// ... after player switch statement ...

if (!CPU_Player.isAlive()) {
    break; // Exit the while loop immediately if the CPU died
}


// system for CPU TO CHOOSE BETWEEN 1 AND 3, but eliminate heal on its very first move 

CPU_Randomizer = rand() % 3 + 1; 
if(CPU_turns == 0) { 
    CPU_Randomizer = rand() % 2 + 1; 
}

switch(CPU_Randomizer) { 
    case 1: {
    int CPU_Damage = CPU_Player.attackQuick();
   myPlayer.takeDamage(CPU_Damage); 
   std::cout << "CPU inflicted " << CPU_Damage << " damage to you!" << std:: endl; 
   break;
    }
   case 2: {
   int CPU_Damage2 = CPU_Player.attackHeavy();
   if(CPU_Damage2 > 0) { 
    myPlayer.takeDamage(CPU_Damage2); 
    std::cout << "CPU inflicted " << CPU_Damage2 << " damage to you!" << std:: endl; 
   }
   else { 
    std::cout << "CPU'S  attack missed!" << std::endl;
   }
   
   break;
   }
    case 3: 
    CPU_Player.heal();
    std::cout << "Your opponents health is now at " << CPU_Player.getHealth() << " HP" << std::endl; 
    break;

    default: 
    std:: cout << "INVALID COMMAND" << std::endl; 
    break;
}
CPU_turns++;
}
if(myPlayer.isAlive()) { 
    std::cout << "CONGRATS YOU WON!\n";
    std:: cout << "THANK YOU FOR PLAYING!" << std::endl;
}
else { 
    std::cout << "Sadly you lost... Want to play again?\n";
}

}