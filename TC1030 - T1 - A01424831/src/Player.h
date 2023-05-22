#include <iostream>
using namespace std;
#pragma once

class Player {
    int playerNumber;
    int position;
    int rolled;
    public:
        Player();
        Player(int);
        ~Player();

        int getPlayerNumber();
        int getPosition();
        int getRolled();
        
        void setPlayerNumber(int);
        void setPosition(int);
        void setRolled(int);
};

Player::Player() {
    playerNumber = 0;
    position = 1;
    rolled = 0;
}

Player::Player(int number) {
    playerNumber = number;
    position = 1;
    rolled = 0;
}

Player::~Player() {}

int Player::getPlayerNumber(){
    return playerNumber;
}

int Player::getPosition() {
    return position;
}

int Player::getRolled() {
    return rolled;
}

void Player::setPlayerNumber(int number) {
    playerNumber = number;
}

void Player::setPosition(int pos) {
    position = pos;
}

void Player::setRolled(int roll) {
    rolled = roll;
}