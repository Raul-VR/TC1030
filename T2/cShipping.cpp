// Raúl Armando Vélez Robles - A01782488
// cShipping.cpp
// Shipping methods are established

#include "cShipping.h"

//Constructor
Shipping::Shipping()
{
    name = "No name"
    address = "No address"
    city = "No city"
    state = "No city"
    shipperZip =
    recipientZip =
    cost =
}

string Shipping::toString()
{
    string txt = "BOARD: \n";
    vector<Tile*>::iterator it;
    for(it = tiles.begin();it !=tiles.end(); ++it)
    {
        txt += (*it)->toString()+" ";
    }
    return txt;
}
