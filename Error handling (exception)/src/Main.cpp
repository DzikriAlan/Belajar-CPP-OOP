#include<iostream>

using namespace std;

// 1. syntax error
/* syntak error adalah kesalahan kita dalam menulis struktur tulisan
   contohya kita lupa naro " ; "*/

// 2. Linking error
/* contohnya, kalo fungsi kuadrat kan bener ya dia prototype terus ada definisinya
   nah tapi kalo print itu akan error nantinya, karena punya prototype tapi
   tidak ada definisinya */
int kuadrat(int &value);
void print(char b);
void alamat(int &value);

// 3. non error
// 4. runtime error adalah error yang terjadi saat berjalannya program

int luas(int &panjang, int &lebar);

int main(int argc, char const *argv[])
{
    int a = 10;
    int b = 5;
    int d = luas(a,b);
    int c = 4;

    cout << &c << endl;
    alamat(c);


    cout << a << endl;
    
    return 0;
}

int kuadrat(int &value){
    return value*value;
}

int luas(int &panjang, int &lebar){
    return panjang*lebar;
}

void alamat(int &value){
    cout << &value << endl;
}