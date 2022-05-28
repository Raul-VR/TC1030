// Raúl Armando Vélez Robles - A01782488
// cGame.h
// Game header, here the class game is established

#pragma once
#include <iostream>
#include <string>
#include<vector>
#include "cDice.h"
#include "cPlayer.h"
#include "cBoard.h"
using namespace std;

class Game
{
private:
    int turn, pNumberNow, roll, playerTile, newPlayerTile;
    bool cont;
    char s, l, n, tileType;
    Player p1, p2;
    vector<Player> players;
    Board board;
    Dice* dice;
public:
    Game();
    void printer(), gameStatus();
    bool play(int pNumber);
};