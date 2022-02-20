// #include<iostream>
// #include<string>
// // 1. include file player, dan weapon yang sudah dibuat
// #include "player.hpp"
// #include "weapon.hpp"

// using namespace std;

// int main(int argc, char const *argv[])
// {
//     Player* player1 = new Player("sniper");
//     Weapon* weapon1 = new Weapon("Senapan", 50);

//     // Implementasi setter untuk meng equip Weapon
//     player1->equipWeapon(weapon1);

//     player1->display();
//     weapon1->display();
//     cout << weapon1->getName();
    
//     return 0;
// }

#include<iostream>
#include<string>
#include"player.hpp"
#include"weapon.hpp"
using namespace std;

int main(int argc, char const *argv[])
{
    Player* player1 = new Player("Sniper");
    Weapon* weapon1 = new Weapon("Senapan", 50);
    player1->equipWeapon(weapon1);

    player1->display();
    weapon1->display();
    
    cout << weapon1->getNama();


    
    return 0;
}