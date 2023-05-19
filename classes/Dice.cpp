#pragma once
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include "Dice.h"
using namespace std;

Dice::Dice() {
    number = 0;
    }

Dice::~Dice() {}

int Dice::getNumber() {
    return number;
}

void Dice::setNumber(int num) {
    number = num;
}

void Dice::roll() {
    number = 1 + rand()%6;
}

