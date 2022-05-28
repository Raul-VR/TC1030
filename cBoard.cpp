// Raúl Armando Vélez Robles - A01782488
// cBoard.cpp
// Board methods are established, here the board is built with tiles

#include "cBoard.h"

//Constructor, builds the board
Board::Board()
{
    numTiles = 30;
    for(int i=0;i<numTiles;i++)
    {
        Tile* t = new Tile('N');
        tiles.push_back(t);
    }
    for(int i=0; i<3;i++)
    {
        int cell = 0;
        do
        {
            cell = rand() % numTiles;
        } 
        while(tiles[cell]->getType() != 'N');
        tiles[cell]->setType('S');
        
        do
        {
            cell = rand() % numTiles;
        } 
        while(tiles[cell]->getType() != 'N');
        tiles[cell]->setType('L');
    }
}

//Prints the board
string Board::toString()
{
    string txt = "BOARD: \n";
    vector<Tile*>::iterator it;
    for(it = tiles.begin();it !=tiles.end(); ++it)
    {
        txt += (*it)->toString()+" ";
    }
    return txt;
}

//Gets the board as tiles
vector<Tile*> Board::getTiles(){
    return tiles;
}