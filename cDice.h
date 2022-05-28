// Raúl Armando Vélez Robles - A01782488
// cDice.h
// Dice header, here the class dice is established

#pragma once
#include <iostream>
#include <string>
#include <time.h>
#include <random>
using namespace std;

class Dice
{
private:
    int number;
public:
    Dice();
    int roll();
};