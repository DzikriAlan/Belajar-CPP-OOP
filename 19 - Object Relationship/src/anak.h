#ifndef ANAK_H
#define ANAK_H

#include<iostream>

class anak{
public:
    std::string nama;
    anak(std::string pNama):nama(pNama){
        std::cout<<"Anak \""<<nama<<"\" ada\n";
    }
    ~anak(){
        std::cout<<"Anak \""<<nama<<"\" tidak ada\n";
    }
};
#endif