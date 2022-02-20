#ifndef IBU_H
#define IBU_H

#include<iostream>
#include<vector>
#include "anak.h"

class ibu{
public:
    std::string nama;
    std::vector<anak *> daftar_anak;
 
    ibu(std::string pNama):nama(pNama){
        std::cout<<"Ibu \""<<nama<<"\" ada\n";
    }
    ~ibu(){
        std::cout<<"Ibu \""<<nama<<"\" tidak ada\n";
    }
    void tambahAnak(anak*);
    void cetakAnak();
};
void ibu::tambahAnak(anak *pAnak){
    daftar_anak.push_back(pAnak);
}
void ibu::cetakAnak(){
    std::cout<<"Daftar Anak dari Ibu \""<<this->nama<<"\":\n";
    for (auto &a : daftar_anak){
        std::cout<<a->nama<<"\n";
    }
    std::cout<<std::endl;
}
#endif