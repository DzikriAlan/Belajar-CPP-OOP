// #include<iostream>

// using namespace std;

// int main(int argc, char const *argv[])
// {
//     // typedef adalah memberikan alias untuk tipedata

//     typedef int I;
//     typedef int ivector2D[2];
//     typedef unsigned long ulong;
//     typedef double vector[2];

//     using numbers = int;

//     // typedef digunakan kalo ada tipe data yang namanya panjang, jadi
//     // nanti nulisnya ga panjang panjang lagi

//     I a = 10;
//     ivector2D b = {1,2};
//     ulong c = 123456789;
//     vector d = {12.345, 13.679};
//     numbers e = 987654321;

//     cout << "Nilai a : " << a << endl;
//     cout << "Nilai b : " << b[0] << " dan " << b[1] << endl;
//     cout << "Nilai c : " << c << endl;
//     cout << "Nilai d : " << d[0] << " dan " << d[1] << endl;
//     cout << "Nilai e : " << e << endl;

//     return 0;
// }

#include<iostream>
#include<string>
using namespace std;

int main(int argc, char const *argv[])
{
    typedef int angka;
    typedef double komaan;
    typedef float koma;
    typedef string kata; 

    angka a = 1;
    komaan b = 1.345;
    koma c = 1.2f;
    kata d = "Hello World!";

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << d << endl;
    
    return 0;
}