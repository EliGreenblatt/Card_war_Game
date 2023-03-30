#include "game.hpp"
#include <iostream>
using namespace std;
using namespace ariel;

Game::Game(Player otherPlayerOne, Player otherPlayerTwo) : p1(otherPlayerOne) , p2(otherPlayerTwo)
{
    turns = 0;
}

void Game::playAll()
{
    cout<<"so much fun playing"<<endl;
}

void Game::printWiner()
{
    cout<<winnerName<<endl;
}

void Game::printLog()
{
    cout<<"Rounds and rounds and rounds"<<endl;
}

void Game::printStats()
{
    cout<<" Stats of the game "<<endl;
}

void Game::playTurn()
{
    turns++;
    cout<<"playing a turn"<<endl;
}

void Game::printLastTurn()
{
    cout<<"Last turn was"<<endl;
}

int Game::getTurn()
{
    return turns;
}