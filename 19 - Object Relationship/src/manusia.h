#ifndef MANUSIA_H
#define MANUSIA_H

#include<iostream>
#include"jantung.h"

class manusia{
public:
    std::string name;
    jantung varJantung; // karena constructor jantung tidak ada parameter, makanya kek gitu doang
 
    manusia(std::string pName)
    : name(pName){
        std::cout<<name<<" hidup\n";
    }
    ~manusia(){
        std::cout<<name<<" mati\n";
    }
};
 
#endif // JANTUNG_H