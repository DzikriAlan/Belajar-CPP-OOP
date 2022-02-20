#include<iostream>
using namespace std;

/*Alhamdulillah, 
    Union adalah kumpulan data yang anggotanya disimpan di dalam memory yang sama
    dan saling mempengaruhi satu sama lain. berbeda dengan struct yang tiap anggotanya
    menyimpan nilai secara terpisah, tiap anggota union menyimpan nilainya di dalam lokasi
    memory yang sama
    
    Ukuran dari suatu union akan di tentukan dari ukuran terbesar dari anggotanya.
    karena pada union diatas terdapat anggota double dimana double berukuran 8 byte,
    maka ukuran dari union dibawah adalah 8 byte*/

union MyUnion
{
      int x;
      int y;
};

struct MyStruct
{
      int x;
      int y;
};

int main(int argc, char const *argv[])
{
    MyUnion madara;

    madara.y = 21;
    cout << "Union" << endl << endl;
    cout << "Data x : " << madara.x << endl;
    cout << "Data y : " << madara.y << endl;

    cout << "Data x : " << madara.x << endl;
    cout << "Data y : " << madara.y << endl << endl;

    MyStruct kaguya;

    kaguya.y = 45.21;
    cout << "Struct" << endl << endl;
    cout << "Data x : " << kaguya.x << endl;
    cout << "Data y : " << kaguya.y << endl;

    cout << "Data x : " << kaguya.x << endl;
    cout << "Data y : " << kaguya.y << endl;

    return 0;
}