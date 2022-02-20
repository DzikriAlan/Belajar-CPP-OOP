// #include"weapon.hpp"
// #include<iostream>
// #include<string>

// Weapon::Weapon(const char* name, double AttackPower){
//     this->name = name;
//     this->AttackPower = AttackPower;
// }
// void Weapon::display(){
//     std::cout << "Weapon ini adalah " << this->name << ", power = ";
//     std::cout << this->AttackPower << std::endl;
//}

// std::string Weapon::getName(){
//     return this->name;
// }

#include<iostream>
#include<string>
#include"weapon.hpp"
using namespace std;

Weapon::Weapon(const char* pnama, int pattack):nama(pnama), attackpower(pattack){}

void Weapon::display(){
    cout << "Weapon ini adalah " << nama << ", AttackPower = " << attackpower << endl;
}

string Weapon::getNama(){return this->nama;}