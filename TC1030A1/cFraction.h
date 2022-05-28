//Raúl Armando Vélez Robles - A01782488
//cFraction.h
// The header, here is the class established 

#pragma once
#include <iostream>
#include <string>
using namespace std;

class Fraction
{
private:
    int num, den;

public:

    Fraction(int num, int den) {
    this -> num = num;
    this -> den = den;
    }

	Fraction(){
        num = 0;
        den = 1;
    }

    ~Fraction();
    void printFraction(); //Prints the fractions
    int prime(); //gets prime number
    double getNum(); //Numerator getter 
    double getDen(); //Denominador getter
    Fraction sumFraction(Fraction f2); //Add the fraction that is called, plus the one that is defined as parameter
    Fraction multFraction(Fraction f2); //Multiply the fraction that is called, plus the one that is defined as parameter
    Fraction simFraction(); //Simplifies the fraction
};