// Raúl Armando Vélez Robles - A01782488
// cTile.h
// Tile header, here the class tile is established

#pragma once
#include <iostream>
#include <string>
using namespace std;

class Tile
{
private:
    char type;
public:
    Tile(char _type);
    char getType();
    void setType(char t);
    string toString();
};