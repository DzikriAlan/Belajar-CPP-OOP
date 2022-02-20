// #include<iostream>
// #include<string>
// #define PLAYER
// #include "player.hpp"

// using namespace std;

// int main(int argc, char const *argv[])
// {
//     Player player1 = Player("Achilles"); 
//     player1.display();

//     // implementasi dari getter
//     cout << player1.getName() << endl;
    
//     // kegiatan bertarung
//     cout << "Bertarung" << endl;
//     player1.addExperience(25); // setter
//     player1.display();
//     player1.addExperience(50);
//     player1.display();
//     player1.addExperience(10);
//     player1.display();
//     player1.addExperience(25);

//     // hasilnya
//     player1.display();
//     cout << endl;
//     cout << "Bertarung" << endl;
//     player1.addExperience(25); //setter
//     player1.display();
//     player1.addExperience(50);
//     player1.display();
//     player1.addExperience(10);
//     player1.display();
//     player1.addExperience(25);
//     player1.display();

//     return 0;
// }

#include"player.hpp"
#include<iostream>
#include<string>
using namespace std;

int main(int argc, char const *argv[])
{
    Player player1("Achilles");
    player1.getName();

    cout << "Bertarung" << endl;
    player1.addexperrience(20);
    player1.addexperrience(30);
    player1.addexperrience(25);
    player1.addexperrience(20);
    player1.addexperrience(5);
    cout << endl;

    cout << "Bertarung" << endl;
    player1.addexperrience(5);
    player1.addexperrience(15);
    player1.addexperrience(30);
    player1.addexperrience(25);
    player1.addexperrience(25);
    cout << endl;

    
    
    return 0;
}