#include "sources/card.hpp"
#include "sources/game.hpp"
#include "sources/player.hpp"
#include "doctest.h"
#include <iostream>
using namespace std;
using namespace ariel;

TEST_CASE("Checking Throws")
{
    Player p1("Alice");
    Player p2("Bob");
    Game game(p1, p1);

    CHECK_NOTHROW(p1.cardesTaken());
    CHECK_NOTHROW(p1.stacksize());
    CHECK_NOTHROW(game.playAll());
    CHECK_NOTHROW(game.playTurn());
    CHECK_NOTHROW(game.printLastTurn());
    CHECK_NOTHROW(game.printLog());
    CHECK_NOTHROW(game.printStats());
    CHECK_NOTHROW(game.printWiner());
}

TEST_CASE("Checking void functions")
{
    Player p1("Alice");
    Player p2("Bob");
    Game game(p1, p1);

    CHECK(std::is_void<decltype(game.playAll())>::value);
    CHECK(std::is_void<decltype(game.playTurn())>::value);
    CHECK(std::is_void<decltype(game.printLastTurn())>::value);
    CHECK(std::is_void<decltype(game.printLog())>::value);
    CHECK(std::is_void<decltype(game.printStats())>::value);
    CHECK(std::is_void<decltype(game.printWiner())>::value);

}

TEST_CASE("Checking stacks")
{
    Player p1("Alice");
    Player p2("Bob");
    Game game(p1, p1);


    CHECK(p2.stacksize() == 19);
    CHECK(p1.stacksize() == 19);
    CHECK(p1.stacksize() + p2.stacksize() == 38);
}

TEST_CASE("Checking Turns")
{
    Player p1("Alice");
    Player p2("Bob");
    Game game(p1, p1);

    CHECK(game.getTurn() == 0);
    game.playTurn();
    CHECK(game.getTurn() == 1);
    game.playTurn() ;   
    CHECK(game.getTurn() == 2);
    game.playTurn();
}