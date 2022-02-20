// #include <iostream>
// #include <string>
// using namespace std;
 
// class siswa{
// private:
//     const int id;
//     string nama;
//     float nilai;
    
 
// public:
//     siswa(int pId=0, string pNama="", float pNilai=0):id(pId),nama(pNama),nilai(pNilai){/*definisi*/}
//     siswa(string pNama):siswa(0,pNama,0){}; // ini adalah delegation construcotor
//     siswa(float pNilai):siswa(0,"",pNilai){};
//     siswa(string pNama, float pNilai):siswa(0,pNama){};
 
//     ~siswa(){
//         cout<<"Id    = "<<id<<endl;
//         cout<<"Nama  = "<<nama<<endl;
//         cout<<"Nilai = "<< nilai << endl;
//         cout<<endl;
//     }
// };
 
// int main(){
//     siswa a(1);
//     siswa b(2,"B",9.8f);
//     siswa c("C", 8.6f); // kita bisa mengacak penempatannya, tapi harus menggunakan delegation constructor
//     siswa d(99.9f);
//     siswa e();
 
//     return 0;
// }

// #include<iostream>
// #include<string>
// using namespace std;

// class Mahasiswa{
//     private:
//         string nama;
//         double nilai;
//         string jurusan;

//     public:
//         Mahasiswa(const char* pnama = "" , double pnilai = 0, const char* pjurusan = "")
//         :nama(pnama), nilai(pnilai), jurusan(pjurusan){};
//         Mahasiswa(double pnilai):Mahasiswa("", pnilai, ""){};
//         Mahasiswa(double pnilai, const char* pjurusan):Mahasiswa("", pnilai, pjurusan){};

//         ~Mahasiswa(){
//             cout << "Nama    : " << this->nama << endl;
//             cout << "Nilai   : " << this->nilai << endl;
//             cout << "Jurusan : " << this->jurusan << endl << endl;
//         }
// };

// int main(int argc, char const *argv[])
// {
//     Mahasiswa a("Kaguya", 99, "Mugen Tsukoyomi");
//     Mahasiswa b(66, "Mangekyou sharingan");
//     Mahasiswa c("Madara");
//     Mahasiswa d;
//     return 0;
// }

#include<iostream>
#include<string>
using namespace std;

class Shinobi{
    private:
        string nama;
        double chakra;
        string desa;
    public:
        Shinobi(const char* pnama = "", double pchakra = 0, const char* pdesa = "")
        :nama(pnama), chakra(pchakra), desa(pdesa){};
        Shinobi(double pchakra):Shinobi("", pchakra, ""){};
        Shinobi(double pchakra, const char* pdesa):Shinobi("", pchakra, pdesa){};

        ~Shinobi(){
            cout << "Nama   : " << this->nama << endl;
            cout << "Chakra : " << this->chakra << endl;
            cout << "Desa   : " << this->desa << endl << endl;
        }
};

int main(int argc, char const *argv[])
{
    Shinobi a("Kaguya", 99, "Bulan");
    Shinobi b(66, "Kumogakure");
    Shinobi c(44);
    Shinobi d;
    return 0;
}
