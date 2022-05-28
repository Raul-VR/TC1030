// Raúl Armando Vélez Robles - A01782488
// cPlayer.h
// Player header, here the class player is established

#pragma once
#include <iostream>
#include <string>
using namespace std;

class Player
{
private:
    int number, box;
    string name;
public:
    Player();
    void setBox(int b), setNumber(int n), setName(string na);
    int getBox(), getNumber();
    string toString();
};