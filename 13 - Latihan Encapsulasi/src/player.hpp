// #ifndef __PLAYER
// #define __PLAYER

// #include<string>
// #include"weapon.hpp"

// class Player{
//     private:
//         std::string name;
//         Weapon* weapon;
//     public:
//         Player(const char*);
//         void display();
//         void equipWeapon(Weapon*);
// };

// #endif

#ifndef __PLAYER
#define __PLAYER

#include<iostream>
#include<string>
#include"weapon.hpp"
using namespace std;

class Player{
    private:
        string nama;
        Weapon* weapon;
    public:
        Player(const char*);
        void display();
        void equipWeapon(Weapon*);
};

#endif