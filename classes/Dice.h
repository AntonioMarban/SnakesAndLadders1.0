#pragma once
#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

class Dice {
    int number;
    public:
        Dice();
        ~Dice();
        int getNumber();
        void setNumber(int);
        void roll();
};