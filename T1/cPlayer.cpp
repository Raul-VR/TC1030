// Raúl Armando Vélez Robles - A01782488
// cPlayer.cpp
// Player methods are established, here we save the individual information of each player

#include "cPlayer.h"

//Constructor
Player::Player()
{
    name = "No name";
    number = 0;
    box = 0;
}

//sets the box where the player is 
void Player::setBox(int b)
{
    box = b;
}

//sets the player number
void Player::setNumber(int n)
{
    number = n;
}

//sets the player name
void Player::setName(string na)
{
    name = na;
}


//retrives the box where the player is 
int Player::getBox()
{
    return box;
}

//gets the player number
int Player::getNumber()
{
    return number;
}

//turns certain information in player to string
string Player::toString()
{
    string txt = "PLAYER: ";
    txt += name + "\n";
    txt += "NUMBER: " + to_string(number) + "\n";
    txt += "BOX: " + to_string(box);
    return txt;
}