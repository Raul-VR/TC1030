// Raúl Armando Vélez Robles - A01782488
// main.cpp
// This file runs the program

#include "cDice.cpp"
#include "cTile.cpp"
#include "cPlayer.cpp"
#include "cBoard.cpp"
#include "cGame.cpp"
using namespace std;

int main()
{
    srand(time(NULL));
    Game game;
    char instruction;
    bool continueGame;

    cout<<"Welcome to Snakes 'n Ladders"<<endl<<
    "Press C to play, or E to exit"<<endl<<
    "The game has 20 turns, if no one wins before that the game is finished"<<endl<<endl;

    cin >> instruction;
    while (instruction != 'C' && instruction != 'E' ) {
        cout << "Invalid option, press C to play, or E to exit (in caps) "<<endl;
        cin >> instruction;
    }
    if (instruction == 'E') {
        cout << endl << "GAME OVER" << endl;
        return 0;
    }

    int pNumber = 0;
    int turn = 1;
    
    game.gameStatus();
    do
    {
        continueGame = game.play(pNumber);

        game.printer();

        if (pNumber == 0){
            pNumber = 1;
        } else {
            pNumber = 0;
        };
        turn += 1;

        if (continueGame != true){
            break;
        }

        cin >> instruction;
        while (instruction != 'C' && instruction != 'E' ) {
            cout << "Invalid option, press C to play, or E to exit (in caps) "<<endl;
            cin >> instruction;
        }

    }while (instruction != 'E' && turn <= 20 && continueGame == true);

    cout << endl << "GAME OVER" << endl; 
    if (turn >= 20){
        cout << "The maximum number of turns has been reached..." << endl; 
    };
    cout << "Thanks for playing" << endl;
    return 0;
}