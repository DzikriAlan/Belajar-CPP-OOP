#include<iostream>
#define FOO
#include"bersama.h"
#include"FOO.h"
#include"bar.h"
 

// ifdef, itu ngecek sesuatu kalo dia itu sudah di define atau belum
// cara bacanya, (jika itu sudah terdefinisi)
// #ifdef FOO
// #define TESTFOO "FOO-nya Ada"
// #else
// #define TESTFOO "FOO-nya Tidak ada!"
// #endif

// // ifndef, itu jika FOO tidak terdefinisi
// #ifndef FOO
// #define FOO "FOO baru"
// #endifFOO.h

// pragma once

using namespace std;

int main(int argc, char const *argv[])
{
    Mahasiswa mahasiswa;
    mahasiswa.nim = 11;
    cout << mahasiswa.nim << endl;
    cout << FOOD << endl;

    return 0;
}