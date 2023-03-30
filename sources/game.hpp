
#include <stack>
#include "player.hpp"
#include "card.hpp"
using namespace std;
namespace ariel
{
    class Game
    {
        private:
            Player p1;
            Player p2;
            std::stack<Card> cardsDeck;
            std::string winnerName;
            std::string loserName;
            int turns;

        public:
            Game(Player playerOne, Player playerTwo); // constructor with two players
            void playAll(); //playes the game untill the end
            void printWiner(); // prints the name of the winning player
            void printLog(); // prints all the turns played one line per turn (same format as game.printLastTurn())
            void printStats();// for each player prints basic statistics: win rate, cards won, <other stats you want to print>. Also print the draw rate and amount of draws that happand. (draw within a draw counts as 2 draws. )
            void playTurn();
            void printLastTurn();
            int getTurn();
    };
}