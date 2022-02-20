// #ifndef __PLAYER
// #define __PLAYER

// #include<iostream>
// #include<string>
// class Player{
//     private:
// // 1. kita boleh ga make std::, tapi harus make using namespace std;, nah karena ini ga make using dan untuk
// // itu string disini harus di kasih std::, nah ketika nanti prototype dibawah ini di deklarasikan di player cpp
// // maka harus meneyertakan std:: juga, contohnya :    std::string Player getName(){definisinya}

//         std::string name;
//         double attackpower;
//         int level;
//         int exp;

//     public:
//         Player(const char* name);

//         // getter ini artinya kita akan membuta attribute menjadi read only
//         std::string getName();

//         // setter, ini untuk write data ke class
//         void addExperience(int expValue);

//         void display();
// };
// #endif

#ifndef __PLAYER
#define __PLAYER

#include<iostream>
#include<string>
using namespace std;

class Player{
    private:
        string nama;
        int level;
        int exp;
        double attackpower;
    public:
        Player(const char*);
        void addexperrience(int);
        void getName();
};

#endif