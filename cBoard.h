// Raúl Armando Vélez Robles - A01782488
// cBoard.h
// Board header, here the class board is established

#pragma once
#include <iostream>
#include <string>
#include<vector>
#include "cTile.h"
using namespace std;

class Board
{
private:
    int numTiles;
    vector<Tile*> tiles;
public:
    Board();
    string toString();
    vector<Tile*> getTiles();
};