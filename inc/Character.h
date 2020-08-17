//
// Created by phil on 8/16/20.
//

#ifndef WIZARDBATTLE_CHARACTER_H
#define WIZARDBATTLE_CHARACTER_H
using namespace std;
class Character{


    protected:
    string name;
    int defense;
    int attack;
    int hp;

    public:
    Character(string name, int hp):name(name), hp(hp){

    }

        virtual void startBattle(){
            attack = (rand() %10)+2;
            defense =(rand()% 10)+2;
        }
    virtual void takeDamage(int damage){
        hp -=damage;
    }

    void battle(Character *enemy){
        if(attack > enemy->defense){
            int damage = attack - enemy->defense;
            enemy->takeDamage(damage);
            std::cout << name << " hits for " << damage << endl;
        }
        else{
            cout << name << " attempts to hit but blocked " << endl;
        }
    }
    int getHp(){
        return hp;
    }

    friend ostream& operator << (std::ostream &output, const Character &c){
        output << c.name << " hp: " << c.hp << endl;
        return output;
    }

};


#endif //WIZARDBATTLE_CHARACTER_H
