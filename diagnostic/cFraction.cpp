//Raúl Armando Vélez Robles - A01782488
//cFraction.cpp
// Here is where i write the code of the methods

#include "cFraction.h"
#include<string>
#include<iostream>
using namespace std;

Fraction::~Fraction(){}

double Fraction::getNum(){
    return num;
}

double Fraction::getDen(){
    return den;
}

void Fraction::printFraction(){
    cout<<num<<'/'<<den;

}

Fraction Fraction::sumFraction(Fraction f2){
    double mcd, num2;
    if(den==f2.getDen()){mcd = den;} 
    else{mcd = den*f2.getDen();} 
    num2 = ((mcd/den)*num)+((mcd/f2.getDen())*f2.getNum()); 
    return Fraction(num2, mcd);  
}

Fraction Fraction::multFraction(Fraction f2){
    double num2, den2;
    num2 = (num*f2.getNum());
    den2 = (den*f2.getDen()); 
    return Fraction(num2, den2);  
}

Fraction Fraction::simFraction() {
    int numerator = num;
    int denominator = den;
    if (denominator == 1) {
        cout << numerator << "/" << denominator;
    }
    else {
        int c = 2;
        while (c <= numerator) {
            if (denominator % c == 0 && numerator % c == 0) {
                denominator = denominator / c;
                numerator = numerator / c;}
            else {
                c++;}
        }
    }
    return Fraction(numerator, denominator);
}
