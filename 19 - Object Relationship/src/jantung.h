#ifndef JANTUNG_H
#define JANTUNG_H

#include<iostream>
 
class jantung{
    public:
        jantung(){
            std::cout<<"jantung dihidupkan\n";
        }
        ~jantung(){
            std::cout<<"jantung dimatikan\n";
        }
};
 
#endif // JANTUNG_H