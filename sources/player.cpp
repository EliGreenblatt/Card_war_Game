#include "player.hpp"
#include <iostream>
using namespace std;
using namespace ariel;

Player::Player(): name("player")
{}

Player::Player(string name) : name(name)
{}

int Player::cardesTaken()
{
    cout<<"The amount of taken cards is 12" <<endl;
    return 12;
}

int Player::stacksize()
{
    cout<<"The stack size is 19"<<endl;
    return 19;
}