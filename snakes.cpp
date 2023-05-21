#include <iostream>
#include <vector>
#include <string>
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
    vector<char> vtr;     //iniclaizar el vector lleno de casillas 'N'
    for (int i = 0; i<30; i++){
    vtr.push_back('N');
    } 
    vtr[12]= 'L';           //Definir las 3 serpientes S y las 3 escaleras L
    vtr[15]= 'L';
    vtr[28]= 'L';
    vtr[5]= 'S';
    vtr[18]= 'S';
    vtr[23]= 'S';

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
