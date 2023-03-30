#ifndef PLAYER_
#define PLAYER_
#include <stack>
#include "card.hpp"
#include <string>


using namespace std;
namespace ariel
{
    class Player
    {
        private:
            std::stack<Card> stack;
            std::string name;
            int rank;

        public:
            Player(); // default constructor
            Player(std::string name); // constructor taking the players name
            int stacksize(); //prints the amount of cards left. 
            int cardesTaken(); // prints the amount of cards this player has won. 
    };
   
}

#endif