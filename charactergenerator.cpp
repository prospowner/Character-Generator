//game character generator (generates defaultt characters)
//getting started

#include <iostream>
#include <string>

//creating basic classes and also basic attributes/stats
class Character {
   public:
   std::string name;
   int power_level;

   //creating a func to instantly deploy charcters and call them out
   void greet() {
    std::cout << "System online. Deploying " << name << " (Power: " << power_level << ")!" << std::endl;
   }
};

//making 2 characters with the help of functions
int main() {
     Character player1;
     player1.name = "Diddy";
     player1.power_level = 69;

     Character player2;
     player2.name = "Epstein";
     player2.power_level = 60;

     //deploying them
     std::cout << "--- Deploying party ---" << std::endl;
     player1.greet();
     player2.greet();

     return 0;
}