// Raúl Armando Vélez Robles - A01782488
// cGame.cpp
// Game methods are established, this is where everything comes together 

#pragma once
#include "cGame.h"

//Constructor
Game::Game()
{
    turn = 0;
    s = 'S';
    l = 'L';
    n = 'N';
    cont = true;

    p1.setName("Player 1");
    p1.setNumber(1);
    p1.setBox(1);
    players.push_back(p1);

    p2.setName("Player 2");
    p2.setNumber(2);
    p2.setBox(1);
    players.push_back(p2);

}

//This is the most important method in the class, since here is where the game is played and values are sent to be saved
bool Game::play(int pNumber)
{
    pNumberNow = pNumber;
    Dice* d = new Dice();
    roll = d->roll();

    playerTile = players[pNumber].getBox(); 
    if (playerTile + roll < 30){
        players[pNumber].setBox(playerTile + roll);
        newPlayerTile = players[pNumber].getBox();
        tileType = board.getTiles()[players[pNumber].getBox()-1]->getType();

        if (tileType == s){
            if (newPlayerTile - 3 <= 0){
                players[pNumber].setBox(1);
            } else if (newPlayerTile - 3 >= 30) {
                cont = false;
                players[pNumber].setBox(30);
            } else {
                players[pNumber].setBox(newPlayerTile - 3);
            };
        } else if (tileType == l) {
            if (newPlayerTile + 3 >= 30){
                cont = false;
                players[pNumber].setBox(30);
            } else {
                players[pNumber].setBox(newPlayerTile + 3);
            };
        } else if (tileType == n) {
            if (newPlayerTile >= 30){
                cont = false;
                players[pNumber].setBox(30);
            } else {
                players[pNumber].setBox(newPlayerTile);
            };
        };
    } else {
        cont = false;
        players[pNumber].setBox(30);
        tileType = 'N';
    };
    turn +=1;
    return cont;
}

//This prints the current turn
void Game::printer()
{
    cout << turn <<" "<< players[pNumberNow].getNumber()  <<" "<< playerTile <<" "<< roll <<" "<< 
    tileType <<" "<< players[pNumberNow].getBox()<<endl;
    if (players[pNumberNow].getBox() >= 30 ){
            cout << "Player " <<  players[pNumberNow].getNumber() << " won!" << endl;
        }
}

//This shows the starting values
void Game::gameStatus()
{
    cout<<"Game Started"<<endl;
    cout << players[0].toString()<<endl;
    cout << players[1].toString()<<endl;
    cout<<board.toString()<<endl <<endl;
    
}