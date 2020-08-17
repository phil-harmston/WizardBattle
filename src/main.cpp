//
// Created by phil on 8/16/20.
//

#include <iostream>
#include <ctime>
#include <Wizard.h>

using namespace std;
int main(){
    srand(time(nullptr));
    Character *gandolf = new Wizard("gandolf", 100, 9);
    Wizard *Saron = new Wizard("Saron", 100, 7);
    do{
        Saron->startBattle();
        gandolf->startBattle();
        Saron->battle(gandolf);
        gandolf->battle(Saron);
        cout << *Saron << endl;
        cout << *gandolf << endl;

    }while(Saron->getHp()>0 && gandolf->getHp()>0);

    if (Saron->getHp() > gandolf->getHp()) {
        cout << "Middle earth is doomed" << endl;
    }else{
        cout << "Middle earth has a chance" << endl;
        }

    return 0;
}
