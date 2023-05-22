#include <iostream>
#include <vector>
#include <string>
#include "classes/Dice.h"
#include "classes/Player.h"
using namespace std;

class MyGame {
    private:

    public:
        MyGame();
        ~MyGame();
        void start();
};

MyGame::MyGame(){}
MyGame::~MyGame(){}

void MyGame::start(){
    srand(time(NULL));
    vector<char> vtr;     //iniclaizar el vector lleno de casillas 'N'
    for (int i = 0; i<30; i++){
    vtr.push_back('N');
    }                       //Definir las 3 serpientes S y las 3 escaleras L
    vtr[12]= 'L';           //En la casilla 11 hay una escalera
    vtr[15]= 'L';
    vtr[28]= 'L';
    vtr[5]= 'S';
    vtr[18]= 'S';
    vtr[23]= 'S';

    int turnNumber = 1;
    int player = 1;
    Player p1, p2;
    Dice dado;
    bool end = false;


    char s1;
    cout << "Welcome to Snakes & Ladders!\nPress C to continue to next turn, or E to end the game:" << endl;

    while (!end) {

        cin >> s1;

        while(s1!='C' && s1!='E' ){
        cout << "Invalid option, please press C to continue next turn or E to end the game." << endl;
        cin >> s1;
        }

        if (s1=='C'){
            dado.roll();

            if (player == 1) {
                p1.setPosition(p1.getPosition() + dado.getNumber());
                if (p1.getPosition() >= 30) {
                    p1.setPosition(30);
                    end = true;
                }
                else if (vtr[p1.getPosition()+1] == 'L') {
                    p1.setPosition(p1.getPosition() + 3);
                }
                else if (vtr[p1.getPosition()+1] == 'S') {
                    p1.setPosition(p1.getPosition() - 3);
                }
                cout << turnNumber << " " << player << " " << p1.getPosition() - dado.getNumber() << " " << dado.getNumber() << " " << vtr[p1.getPosition() + 1] << " " << p1.getPosition() << endl;
                if (end) {
                    cout << "Player 1 is the winner!!!" << endl;
                }
                player = 2;

            }

            else {
                p2.setPosition(p2.getPosition() + dado.getNumber());
                if (p2.getPosition() >= 30) {
                    p2.setPosition(30);
                    end = true;
                }
                else if (vtr[p2.getPosition()+1] == 'L') {
                    p2.setPosition(p2.getPosition() + 3);
                }
                else if (vtr[p2.getPosition()+1] == 'S') {
                    p2.setPosition(p2.getPosition() - 3);
                }
                cout << turnNumber << " " << player << " " << p2.getPosition() - dado.getNumber() << " " << dado.getNumber() << " " << vtr[p2.getPosition() + 1] << " " << p2.getPosition() << endl;

                if (end) {
                    cout << "Player 2 is the winner!!!" << endl;
                }

                player = 1;
            }


            turnNumber += 1;
            
        }
        else if (s1=='E'){
            cout << "Thanks for playing!!!" << endl;
            break;
        }



    }
    cout << "--GAME OVER--" << endl;

}

int main() {
    MyGame g; 
    g.start();
    return 0;
}
