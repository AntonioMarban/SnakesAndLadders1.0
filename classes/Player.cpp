#pragma once
#include <iostream>
#include <string>
#include "Player.h"
using namespace std;

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