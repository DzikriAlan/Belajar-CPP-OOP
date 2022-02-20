// #ifndef __WEAPON
// #define __WEAPON

// #include<string>

// class Weapon{
//     private:
//         std::string name;
//         double AttackPower;
//         Weapon* weapon;

//     public:
//         Weapon(const char*, double);
//         void display();
//         // setter
//         void equipWeapon(Weapon*);
//         // getter, read only
//         std::string getName();
// };
// #endif

#ifndef __WEAPON
#define __WEAPON

#include<iostream>
#include<string>
using namespace std;

class Weapon{
    private:
        string nama;
        int attackpower;
        Weapon* weapon;
    public:
        Weapon(const char* pnama, int pattack);
        void display();
        void equipWeapon(Weapon* weapon);
        string getNama();
};

#endif