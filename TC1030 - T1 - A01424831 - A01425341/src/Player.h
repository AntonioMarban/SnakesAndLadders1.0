#include <iostream>
using namespace std;
#pragma once

class Player {
    int position;
    public:
        Player();
        ~Player();

        int getPosition();
        
        void setPosition(int);
};

Player::Player() {
    position = 1;
}

Player::~Player() {}

int Player::getPosition() {
    return position;
}

void Player::setPosition(int pos) {
    position = pos;
}
