// Raúl Armando Vélez Robles - A01782488
// cDice.cpp
// Dice methods are established, this is a random number generator

#include "cDice.h"

//constuctor
Dice::Dice()
{
    number = 0;
}

//gives a random number
int Dice::roll()
{
    number = rand() % 6 + 1;
    return number;
}
