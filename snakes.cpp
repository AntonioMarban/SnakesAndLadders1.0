#include <iostream>
#include "classes/Turn.h"
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
    char s1;
    cout << "Press C to continue next turn, or E to end the game:"<< endl;
    cin >> s1;
    while(s1!='C' && s1!='E' ){
    cout<< "Invalid option, please press C to continue next turn or E to end the game."<<endl;
    cin >> s1;
    }
    if (s1=='C'){
        cout<< "Continuar"<<endl;
        Turn a;
    }
    if (s1=='E'){
        cout<< "Exit"<<endl;
    }


}

int main() {
    MyGame g; 
    g.start();

}
