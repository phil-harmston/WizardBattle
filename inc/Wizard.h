//
// Created by phil on 8/16/20.
//

#ifndef WIZARDBATTLE_WIZARD_H
#define WIZARDBATTLE_WIZARD_H
#include "Character.h"

using namespace std;
class Wizard : public Character {
    public:
    Wizard(string const name, int hp, int magic): Character(name, hp), magic (magic){
    }
    void startBattle(){
        attack = (rand() % 10)+2 +magic;
        defense = (rand() % 10)+2;
    }

    private:
    int magic;
};
#endif //WIZARDBATTLE_WIZARD_H
