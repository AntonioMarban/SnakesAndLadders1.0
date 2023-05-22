#include <iostream>
#include "Player.h"
#include "Dice.h"
using namespace std;

class Turn{
    private:
        int numTurn, numPlayer, inPosition, numDice, fiPosition;
        char board;
    public:
        Turn();
        ~Turn();
        void setNumTurn(int _numTurn);
        void setNumPlayer(int _numPlayer);
        void setInPosition(int _inPosition);
        void setNumDice(int _numDice);
        void setFiPosition(int _fiPosition);
        void setBoard(char _board);

        int getNumTurn();
        int getNumPlayer();
        int getInPosition();
        int getNumDice();
        int getFiPosition();
        char getBoard();

        void continu();

};

Turn::Turn(){}
Turn::~Turn(){} 

void Turn::setNumTurn(int _numTurn){
    numTurn= _numTurn;
}
void Turn::setNumPlayer(int _numPlayer){
   numPlayer= _numPlayer;
}
void Turn::setInPosition(int _inPosition){
    inPosition= _inPosition;
}
void Turn::setNumDice(int _numDice){
    numDice= _numDice;
}
void Turn::setFiPosition(int _fiPosition){
    fiPosition= _fiPosition;
}
void Turn::setBoard(char _board){
    board= _board;
}

int Turn::getNumTurn(){
    return numTurn;
}
int Turn::getNumPlayer(){
   return numPlayer; 
}
int Turn::getInPosition(){
    return inPosition;
}
int Turn::getNumDice(){
    return numDice;
}
int Turn::getFiPosition(){
    return fiPosition;
}
char Turn::getBoard(){
    return board;
}

void Turn::continu(){}
