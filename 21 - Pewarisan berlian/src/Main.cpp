// #include <iostream>
// using namespace std;
// /* alhamdulillah, 
//    pewarisan berlian itu, memungkinkan kita untuk memanggil constructor dari class kakek nenek.
//    kunci agar menjadi pewarisan berlian itu dengan menggunakan keyword virtual, yang dituliskan
//    di samping class yang akan di inheritance*/

// // 1. buat class baseclass nenek moyang
// class orang{
//     public:
//     int umur;
//     orang(int pUmur):
//         umur(pUmur)
//         {
//             cout<<"orang dibuat dengan umur "<<umur<<"\n"<<endl;
//     }
// };
// // 2. buat derrivedclass pertama, serta tuliskan keyword virtual terus tulis class moyangnya
// class pekerja: virtual public orang{ //ditambahkan virtual
//     public:
//     pekerja(int pUmur):
//         orang(pUmur)
//         {
//             cout<<"pekerja dibuat\n"<<endl;
//     }
// };

// // 2. buat derrivedclass kedua, serta tuliskan keyword virtual terus tulis class moyangnya
// class pelajar: virtual public orang{ //ditambahkan virtual
//     public:

//     pelajar(int pUmur):
//         orang(pUmur)
//         {
//             cout<<"pelajar dibuat\n"<<endl;
//     }
// };
// // 3. buat derrivedclass ketiga, dan disini tuliskan derrived class 1 dan 2
// class budi: public pekerja, public pelajar{
//     public:

//     budi(int pUmur):
//         pekerja(pUmur),
//         pelajar(pUmur),
// // 4. nah karena class pekerja dan class pelajar sudah diwarisi oleh virtual orang maka, consturctor orang bisa di panggil disini
//         orang(pUmur)
//         {
//             cout<<"Budi dibuat\n"<<endl;
//     }
// };
 
// int main(){
//     budi a(12);

//     // output
//     /* orang dibuat dengan umur 12
//        pekerja dibuat
//        pelajar dibuat
//        Budi dibuat*/

//     /* Tapi di saat menggunakan virtual, kita dimungkinkan memanggil constructor dari class kakek-nenek
//       secara langsung.*/

//     /* jadi intinya kalo kita make, pewarisan berlian dan kita make virtual, kita akan fleksibel
//        yaitu kita dapat memanggil consctructor daril class kakek-nenek secara langsung*/
 
//     return 0;
// }

#include<iostream>
using namespace std;

class Manusia{
    public:
        Manusia(){cout << "Hallo ini dari manusia!" << endl;}
};

class Orang : virtual public Manusia{
    public:
      Orang(){cout << "Hallo ini dari Orang!" << endl;}
};

class Wong : virtual public Manusia{
    public:
        Wong(){cout << "Hallo ini dari Wong!" << endl;}
};

class Thanos : public Orang, public Wong{
    public:
        string nama;

        Thanos(const char* pnama): nama(pnama),Wong(), Orang(), Manusia(){cout << "Hay " << nama << endl;}
};

class BaseClass{
    protected:
        string nama;
        string alamat;
};

class DerrivedClass : public BaseClass{
    protected:
        string universitas;
        string jurusan;
    public:
        DerrivedClass(const char*pnama, const char*palamat, const char*puniversitas, const char*pjurusan){
            BaseClass::nama = pnama;
            BaseClass::alamat = palamat;
            this->universitas = puniversitas;
            this->jurusan = pjurusan;
        }
        void perkenalanBC(){
            cout << "Saya " << nama << ", tinggal di " << alamat << endl;
        }

        void perkenalanDC(){
            cout << "saya kuliah di " << this->universitas << ", jurusan " << this->jurusan << endl;
        }
};

int main(int argc, char const *argv[])
{
    Thanos a("Thanos");

    DerrivedClass b("thanos", "mars", "marvel", "stone");
    b.perkenalanBC();
    b.perkenalanDC();
    

    return 0;
}
