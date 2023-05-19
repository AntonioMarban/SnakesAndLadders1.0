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