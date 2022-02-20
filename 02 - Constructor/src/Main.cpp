#include<iostream>
#include<string>
using namespace std;

class Mahasiswa{
    public:
        string nama;
        string nim;
        string jurusan;
        double ipk;

        Mahasiswa(string nama, string nim, string jurusan, double ipk){
            Mahasiswa::nama = nama;
            Mahasiswa::nim = nim;
            Mahasiswa::jurusan = jurusan;
            Mahasiswa::ipk = ipk;

            cout << "Nama    : " << Mahasiswa::nama << endl;
            cout << "NIM     : " << Mahasiswa::nim << endl;
            cout << "Jurusan : " << Mahasiswa::jurusan << endl;
            cout << "IPK     : " << Mahasiswa::ipk << endl << endl;
        }
};

int main(int argc, char const *argv[])
{
    Mahasiswa mhs1("Sasuke","123","Uchiha", 29.7);
    Mahasiswa mhs2("Naruto","456","Uzumaki", 31.7);
    
    return 0;
}
