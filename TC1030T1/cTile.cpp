// Raúl Armando Vélez Robles - A01782488
// cTile.cpp
// Tile methods are established, these are the building pieces of the board

#include "cTile.h"

//Constructor
Tile::Tile(char _type)
{
    type = _type;
}

//gets tile type
char Tile::getType()
{
    return type;
}

//sets tile type
void Tile::setType(char t)
{
    type = t;
}

//returns the tile as string
string Tile::toString()
{
    string txt = "";
    txt += type;
    return txt;
}