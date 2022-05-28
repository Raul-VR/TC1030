//Raúl Armando Vélez Robles - A01782488
//main.cpp
// This file runs the program

#include<iostream>
#include<string>
#include <math.h>
#include "cFraction.h"
#include "cFraction.cpp"

using namespace std;

int main(){

    cout<<endl<<"This program asks for two fractions, introduce the respective numerator and denominator to get then added and multiplied "<<endl<<endl;
    const int N = 2;
    Fraction fractions[N], fractionSim, sumFractionSim, multFractionSim;


    for(int i=0; i<N; i++){  //This asks for the numerators and denominators 
        int n;
        int d;

        cout<<"Introduce the numerator "<<i+1<<": "<<endl;
        cin>>n;
        do{cout<<"Introduce the denominator "<<i+1<<" (Not negative numbers nor zero): "<<endl;
        cin>>d;}while(d==0);
        fractions[i] = Fraction(n,d);
    }

    for(int i=0; i<N; i++){ //The simplified version is printed 
        cout<<"Fraction number simplified "<<i+1<<": "<<endl;
        fractionSim = fractions[i].simFraction();
        fractionSim.printFraction();
        cout<<endl;
    }

    Fraction sumaTotal1 = fractions[0].sumFraction(fractions[1]); //Adds the first fraction plus the second
    cout<<"Result of fraction sum: "<<endl;
    sumaTotal1.simFraction().printFraction();
    cout<<endl;

    Fraction multTotal1 = fractions[0].multFraction(fractions[1]); //Multiplies the first fraction plus the second
    cout<<"Result of fraction multiplication: "<<endl;
    multTotal1.simFraction().printFraction();
    cout<<endl;

    return 0;
}