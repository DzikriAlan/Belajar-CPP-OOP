// #include<iostream>
// #include<string>
// #include"player.hpp"

// Player::Player(const char* name){
//             this->name = name;
//             this->level = 1;
//             this->exp = 0;
//             this->attackpower = 100;
//         }

//         // getter ini artinya kita akan membuat attribute menjadi read only
//         std::string Player::getName(){
//             return this->name;
//         }

//         // setter, ini untuk write data ke class
//         void Player::addExperience(int expValue){
//             int maxExp = 100;
//             std::cout << "Mendapatkan exp : " << expValue << std::endl;
//             this->exp += expValue;
//             if(this->exp >= maxExp){
//                 // maka dia level up
//                 this->level++;
//                 this->attackpower += 100;
//                 std::cout << "Level Up!" << std::endl;
//                 this->exp = 0;
//             }
//         }

//         void Player::display(){
//             std::cout << "Name   : " << this->name << std::endl;
//             std::cout << "Level  : " << this->level << ", Exp : " << this->exp << std::endl;
//             std::cout << "Attack : " << this->attackpower << std::endl;
//         }

#include"player.hpp"
#include<iostream>
#include<string>
using namespace std;

Player::Player(const char* pnama):nama(pnama){
    this->level = 1;
    this->exp = 0;
    this->attackpower = 100;
}

void Player::getName(){
    cout << "Nama        : " << this->nama << endl;
    cout << "Level       : " << this->level << ", mendapatkan Exp = " << this->exp << endl;
    cout << "AttackPower : " << this->attackpower << endl << endl;
}

void Player::addexperrience(int inexp){
    this->exp += inexp;
    cout << "Nama        : " << this->nama << endl;
    if(this->exp >= 100){
        ++level;
        this->attackpower += 100;
        cout << "Level Up!" << endl;
        this->exp = 0;
    }
    cout << "Level       : " << this->level << ", mendapatkan Exp = " << this->exp << endl;
    cout << "Attackpower : " << this->attackpower << endl;
}
    









