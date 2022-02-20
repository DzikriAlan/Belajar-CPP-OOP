// #include "player.hpp"
// #include<iostream>

// Player::Player(const char* name){
//     this->name = name;
// }
// void Player::display(){
//     std::cout << "Player ini adalah " << this->name << std::endl;
//     std::cout << "Menggunakan senjata : " << this->weapon->getName() << std::endl;
// }

// void Player::equipWeapon(Weapon* weapon){
//     this->weapon = weapon;
// }

#include<iostream>
#include<string>
#include"player.hpp"
#include"weapon.hpp"
using namespace std;

Player::Player(const char* pnama):nama(pnama){}

void Player::display(){
    cout << "Player ini adalah " << nama << endl;
}

void Player::equipWeapon(Weapon* weapon){
    this->weapon = weapon;
}