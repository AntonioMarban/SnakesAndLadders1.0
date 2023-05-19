#include <iostream>
#include "classes/Dice.cpp"
using namespace std;

int main() {
    srand(time(NULL));
    Dice dado;
    for (int i = 0; i<10; i++) {
        dado.roll();
        cout << dado.getNumber() << endl;
    }
    return 0;
}